#ifndef TIMECHECKER_H_
#define TIMECHECKER_H_

#include <chrono>
#include <cstdint>
#include <iostream>
#include <unistd.h>

class TimeChecker {
public:
    TimeChecker( void )
        : prev_checked_time( -1 )
    {}
    TimeChecker( const TimeChecker &t ) = delete;
    void    Start       ( void );
    void    Stop        ( void );
    int64_t getMillisec ( void );

private:
    std::chrono::_V2::steady_clock::time_point start;
    std::chrono::_V2::steady_clock::time_point end;
    int64_t prev_checked_time;
};

#endif /* TIMECHECKER_H_ */