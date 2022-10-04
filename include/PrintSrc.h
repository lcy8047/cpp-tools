#ifndef PRINT_SRC_H_
#define PRINT_SRC_H_

#include <string>

class PrintSrc {
public:
    PrintSrc( void )
        : _prev_line_num( 0 )
    {}

    void PrintSrcLine( std::string src_file_path , int line_num );
private:
    int _prev_line_num;
    std::string _prev_file_path;
};
#endif /* PRINT_SRC_H_*/