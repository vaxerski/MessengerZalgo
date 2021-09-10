#include <iostream>
#include <stdio.h>
#include <vector>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <random>

// TABLE OF ZALGO CHARACTERS
//
std::vector<std::string> zalgoCharactersUp = {"ࣤ", "ࣨ", "ܺ", "݉", "݊", "݅", "ࣨ", "ࣤ", "๊", "์"};
std::vector<std::string> zalgoCharactersDown = {"ࣧ", "ࣧ", "ܻ", "݆", "ࣩ", "̰", "̬"};
//

// Global Settings :)
uint iSwitch        = 8;
uint iMinLength     = 150;
uint iSpread        = 200;
//

// Random
std::default_random_engine defaultRandomEngine;
//

// Execute a shell command and get the output
std::string exec(const char *cmd)
{
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe)
    {
        std::cout << "exec failed in pipe.\n";
        return "";
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
    {
        result += buffer.data();
    }
    return result;
}

std::string createZalgoArm(const bool bUp)
{

    std::string output = "";
    const std::vector<std::string> *pCharVec = bUp ? &zalgoCharactersUp : &zalgoCharactersDown;
    
    std::uniform_int_distribution<int> distributionArmLength(iMinLength, iMinLength + iSpread);
    std::uniform_int_distribution<int> distributionSwitch(0, iSwitch);
    std::uniform_int_distribution<int> distributionChar(0, pCharVec->size() - 1);

    int64_t currentChar = distributionChar(defaultRandomEngine);
    int64_t armLength = distributionArmLength(defaultRandomEngine);

    if(armLength < 0) {
        std::cout << "Arm length < 0, aborting.\n";
        return "";
    }

    for (uint32_t i = 0; i < armLength; ++i)
    {
        if(distributionSwitch(defaultRandomEngine) == 0) {
            currentChar = distributionChar(defaultRandomEngine);
        }

        output += pCharVec->at(currentChar);
    }

    return output;
}

std::string createZalgo(std::string szInput)
{
    std::string output = "";

    for (const char c : szInput)
    {
        output += c;

        output += createZalgoArm(true);
        output += createZalgoArm(false);
    }

    return output;
}

void printHelp() {
    std::cout << "MessengerZalgo usage:\n\
    -h / --help => Print this menu.\n\
    -m / --min-length => minimum arm length. \n\
    -r / --spread => arm length spread (min + spread = max). \n\
    -s / --switch-every => switch the character every x average repeats.\n\
\n\
<message>\n";
}

int main(int argc, char *argv[])
{
    srand(time(NULL));

    if (argc == 1)
    {
        std::cout << "Use --help for usage.";
        return 1;
    }

    // Parse params
    std::string input = "";
    std::string currentParam = "";

    for (int i = 1; i < argc; ++i)
    {
        std::string param = argv[i];

        if (param.find('-') == 0) {
            currentParam = param;

            if (currentParam == "-h" || currentParam == "--help") {
                // print help
                printHelp();
                return 0;
            }

            continue;
        }

        if (currentParam == "-m" || currentParam == "--min-length") {
            try
            {
                iMinLength = stoi(param);
            }
            catch (...)
            {
                std::cout << "Invalid parameter: " << param << "! expected uint";
                return 1;
            }

            currentParam = "";
            continue;
        }

        if (currentParam == "-r" || currentParam == "--spread") {
            try
            {
                iSpread = stoi(param);
            }
            catch (...)
            {
                std::cout << "Invalid parameter: " << param << "! expected uint";
                return 1;
            }

            currentParam = "";
            continue;
        }

        if (currentParam == "-s" || currentParam == "--switch-every") {
            try
            {
                iSwitch = stoi(param);
            }
            catch (...)
            {
                std::cout << "Invalid parameter: " << param << "! expected uint";
                return 1;
            }

            currentParam = "";
            continue;
        }

        // No param, add to input
        input += param;
        input += " ";
    }

    std::string output = createZalgo(input);

    std::string workingDir = exec("pwd");
    workingDir = workingDir.substr(0, workingDir.length() - 1);

    std::string writeResult = exec(((std::string)("echo \"" + output + "\" > \"" + workingDir + "/messengerZalgoOutput.txt\"")).c_str());

    std::cout << "Done! Result written to ./messengerZalgoOutput.txt. Size: " << output.length() << " characters.\n";

    return 0;
}