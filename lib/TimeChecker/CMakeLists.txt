set(CMAKE_OSX_ARCHITECTURES "x86_64")

add_library(TimeChecker TimeChecker.cpp)

target_compile_options(TimeChecker PUBLIC -g -Wall)
target_include_directories(TimeChecker PUBLIC "${PROJECT_SOURCE_DIR}/include")