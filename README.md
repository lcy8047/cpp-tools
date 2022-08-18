# cpp-tools

C++ libraries to help develop

## libraries

``` text
lib - TimeChecker
    └ TerminalUtil
```

### TimeChecker

For measuring the program's ( or function's, etc ... ) running time

``` C++
TimeChecker *ts = new TimeChecker;
ts->start();
// do something
ts->stop();
std::cout << "time : " << ts->getMillisec() << std::endl;
```

### TerminalUtil

For printing in the same line without newline(`\n`)

``` C++
TerminalUtil *tu = new TerminalUtil;
tu->PrintWithoutNewLine( "Hello, World!" );
```
