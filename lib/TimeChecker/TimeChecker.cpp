#include "TimeChecker.h"

void TimeChecker::Start( void )
{
    start = std::chrono::steady_clock::now();
}

void TimeChecker::Stop( void )
{
    end = std::chrono::steady_clock::now();
}

int64_t TimeChecker::getMicrosec( void )
{
    int64_t time = std::chrono::duration_cast<std::chrono::microseconds>( end - start ).count();
    return time;
}

int64_t TimeChecker::getMillisec( void )
{
    int64_t time = std::chrono::duration_cast<std::chrono::milliseconds>( end - start ).count();
    return time;
}

int64_t TimeChecker::getNanosec( void )
{
    int64_t time = std::chrono::duration_cast<std::chrono::nanoseconds>( end - start ).count();
    return time;
}
