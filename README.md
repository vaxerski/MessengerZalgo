# MessengerZalgo

A cli utility to generate zalgo-like text with "arms" going up and down.

Facebook's "Messenger" on Android doesn't scissor the zalgo characters resulting in stuff like this:
![Demonstration](https://i.ibb.co/Ryv8KQn/Screenshot-20210910-194239-Messenger2.jpg)

## System
Made for Linux.

To make it work for windows, you need to patch the saving method. exec() will not work, and echo "" > file won't either.

*Feel free to make a PR for windows compatibility, make sure to mark windows source as* `#ifdef WIN32` *to make the same source compile on linux and windows.*


<br/>

## By the way

<br/><br/>

Iࣩܻܻܻܻܻܻࣩࣩࣩࣤࣤࣤࣤࣤࣤࣤࣤࣤࣤࣤࣤtࣤࣤࣨࣨࣨࣨ์์์์ࣨࣨ݊݊݊ܺܺ݊݊݊์์์์์̬̬̬̬̬̬̰̰̰ࣤࣧࣧ ๊๊๊๊ࣩࣩ̬̬ࣩࣩࣩࣩࣩࣩࣩࣩࣩ̬̬݆݆݆݆ࣩ݉݉݉݉݉݉݉݊݊݊ࣨ݅݅݅݅݅݅݅݅ࣧࣧࣧࣧࣧࣧࣧaࣨࣨ݊݊ࣤࣤࣤ์์๊๊݆݆݆݆݆݆݆݆݆݆݆݆݆݆݆ܻܻܻܻܻࣨ݉ࣨࣨࣨࣨࣨࣨࣨࣨࣨࣨl๊๊๊๊๊๊ࣤࣤࣤࣤ์์์์݊݊݊݅݅݅݅݅݅์̰̰ܻܻܻ̰̰̰ࣨࣧࣧs๊ࣩ̬ࣩܻࣤࣤࣤࣤࣤࣨࣤࣤࣤࣨࣨࣨ݉ࣧࣧࣧࣧࣧࣧࣧࣧࣧo݆݆݆ܻܻܻܻܻࣩࣩࣩࣩࣩࣩࣨࣨࣨࣨࣤࣨࣨࣨࣨࣨࣨࣨࣧࣧ ݊݊݊݊݊݊ࣨࣨࣨࣨࣨܺܺܺܺ์๊๊๊๊ࣩࣩ݆݆ࣨࣨࣨࣨࣨࣨࣨࣨࣤࣧࣧࣧࣧࣧࣧw๊๊๊̰ܻܻܻܻܻܻܺܺܺܺࣤ݅݅ࣤࣨࣨࣤࣤࣤࣤࣤࣧࣧࣧࣧࣧࣧࣧࣧࣧoࣩࣩࣩ̬ܻܻܻࣨࣨ݅݅݅݅݅ܺܺܺܺࣤࣤࣤࣨܺ݅ࣧࣧࣧࣧࣧࣧrࣤࣤܺ݅݅݅݅ܺܺࣤࣤࣤ์์์์݆݆݆݆̰̰̰ࣩࣩࣩࣩ݅݅݅݊݊݊݊݊ࣧࣧࣧࣧࣧk๊๊๊๊๊๊๊๊๊๊๊ࣤࣤࣤࣨࣤ݉݊ࣤࣤܺܺܺ์ࣩܻ݆݆݆݆̰̰̰݆݆ࣩࣩࣩࣩࣩ݆ࣧࣧࣧࣧࣧࣧࣧࣧࣧsࣤࣤܺܺܺܺܺܺܺܺࣨࣨࣨࣨࣨࣨࣨࣨࣨ์์ܻܻࣩࣩࣩࣩࣩࣤࣤࣤࣤࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧ ๊๊๊๊์์݆݆݆݆݆݆ࣩࣩࣩࣩܻܻܻܻܻܻܻࣩ̬̬̬݅݅݅݅݅݅݅݅݅݅݅݅ࣤࣤࣤࣨࣨࣨࣨࣨࣨࣨࣨࣧࣧh̬̬̬ࣩ̰̰̰̬̬̬̬̬̬̬݅݅݅ࣤ݊݊ࣤࣤࣤࣤࣤࣨࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧe݆݆݆݆݆݆݅݅ࣤࣤࣤࣤࣤࣤࣨࣨࣨࣨࣨࣨࣨࣨࣨࣨࣨ݉݉݉ࣤ݊݊ࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧr̬̬̬̬ܻܻࣩ݆݆̰̰̰̰ܻ݆݆݆݆݆݆݆݆݆ܺࣨ݉݉݉݉݉݉݉݉݉ࣨࣨࣨࣨࣨࣨࣨࣨ݊݊݊݊݊݊݊݊݊݊ܺࣧࣧࣧࣧe݉݉݉݉݉݉݊݊݊݊ࣨࣨࣨࣨࣨࣨ์์์ܻܻ̬ܻܻܻ݆݆݆݆݆̬̬ࣤࣤࣤࣤࣤࣤࣤࣤࣤࣤࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧࣧ ࣩࣩࣩࣩࣩࣩ݆̬̬̬݅݅݅݅݅ࣤ݊ࣤࣤࣤ:ࣨࣤࣤ์์์ࣨࣨࣨࣨࣨࣨ์์๊ࣩࣩࣩࣩࣩࣩࣩࣩ݆̬̬݆̬݉݉݉ࣨࣨࣨࣨ݉݉݉݉݉݉ܺܺࣧࣧࣧࣧࣧ)ܺ݉์์์์์์๊๊๊๊ࣨࣨࣨࣤ݉์์์์์์ܻܻܻܻܻܻܻܻܻ̬̬݉݉݉ ๊̰ܻܻܻ̬̬̬ࣤࣨࣨࣨ݉ܺܺܺ݊݊ࣨࣨࣧࣧࣧࣧࣧ

