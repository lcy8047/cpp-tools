set(CMAKE_OSX_ARCHITECTURES "x86_64")

add_library(TerminalUtil TerminalUtil.cpp)

target_compile_options(TerminalUtil PUBLIC -g -Wall)
target_link_libraries(TerminalUtil)
target_include_directories(TerminalUtil PUBLIC "${PROJECT_SOURCE_DIR}/include")