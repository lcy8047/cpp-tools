#include <fstream>
#include <iostream>

#include "PrintSrc.h"

void PrintSrc::PrintSrcLine( std::string src_file_path, int line_num )
{
    if ( _prev_file_path == src_file_path && _prev_line_num == line_num ) {
        return;
    }
    std::ifstream code_file_stream( src_file_path );
    if ( ! code_file_stream.is_open() ) {
        std::cerr << "Opening file is failed : " << src_file_path << std::endl;
        return;
    }
    std::string code_line;
    for ( int i = 1; i <= line_num; ++ i ) {
        getline( code_file_stream, code_line );
    }
    code_file_stream.close();
    
    for( size_t i = 0; i < code_line.length(); ++ i ) {
        if ( code_line[i] == '\t' ) {
            code_line.replace( i, 1, "    " );
        }
    }

    while( code_line.back() == ' ' ) {
        code_line.pop_back();
    }
    _prev_line_num = line_num;
    _prev_file_path = src_file_path;
    std::cout << code_line << std::endl;
}