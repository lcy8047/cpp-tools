#include "TimeChecker.h"

void TimeChecker::Start( void )
{
    start = std::chrono::steady_clock::now();
}

void TimeChecker::Stop( void )
{
    end = std::chrono::steady_clock::now();
}

int64_t TimeChecker::getMillisec( void )
{
    int64_t time = std::chrono::duration_cast<std::chrono::milliseconds>( end - start ).count();
    return time;
}