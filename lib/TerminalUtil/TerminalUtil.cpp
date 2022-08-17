#include "TerminalUtil.h"

uint16_t TerminalUtil::GetWidth( void ) const
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    
    return w.ws_col;
}

uint16_t TerminalUtil::GetHeight( void ) const
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    
    return w.ws_row;
}

void TerminalUtil::Reset( void )
{
    _prev_printed_line = 0;
}

void TerminalUtil::ClearLine( const int line ) const
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    for ( int l = 0; l < line; ++ l ) {
        std::cout << "\r";
        for( int i = 0; i < w.ws_col; i ++ ) {
            std::cout << " ";
        }
        std::cout << "\r";
        if ( l < line - 1 ) {
            std::cout << "\u008d";
        }
        std::cout << std::flush;
    }
}

void TerminalUtil::PrintWithoutNewLine( const std::string output_str )
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    ClearLine( _prev_printed_line );

    int line_count = output_str.length() / ( w.ws_col + 1 )  +  1;
    _prev_printed_line = line_count;

    std::cout << output_str << std::flush;
}

void TerminalUtil::PrintLineWithChar( const char c ) const
{
    uint16_t width = GetWidth();
    for ( int i = 0; i < width; ++ i ) {
        std::cout << c;
    }
    std::cout << std::endl;
}