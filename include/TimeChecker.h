#ifndef TIMECHECKER_H_
#define TIMECHECKER_H_

#include <chrono>
#include <cstdint>
#include <iostream>
#include <unistd.h>

class TimeChecker {
public:
    TimeChecker( void ) {}
    TimeChecker( const TimeChecker &t ) = delete;
    void    Start       ( void );
    void    Stop        ( void );
    int64_t getMicrosec ( void );
    int64_t getMillisec ( void );
    int64_t getNanosec  ( void );

private:
#ifdef __APPLE__
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point end;
#elif __linux
    std::chrono::_V2::steady_clock::time_point start;
    std::chrono::_V2::steady_clock::time_point end;
#endif
};

#endif /* TIMECHECKER_H_ */