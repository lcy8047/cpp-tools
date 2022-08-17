#ifndef TERMINALUTIL_H_
#define TERMINALUTIL_H_

#include <cstdint>
#include <stdint.h>
#include <iostream>
#include <ncurses.h>
#include <string>
#include <sys/ioctl.h>
#include <unistd.h>

class TerminalUtil {
public:
    TerminalUtil( void )
        : _prev_printed_line( 0 )
    {}

    uint16_t    GetWidth            ( void ) const;
    uint16_t    GetHeight           ( void ) const;
    void        Reset               ( void );
    void        ClearLine           ( int line ) const;
    void        PrintWithoutNewLine ( const std::string str );
    void        PrintLineWithChar   ( const char c ) const;
private:
    int _prev_printed_line;
};

#endif /* TERMINALUTIL_H_ */