add_library(PrintSrc PrintSrc.cpp)

target_compile_options(PrintSrc PUBLIC -g -Wall)
target_include_directories(PrintSrc PUBLIC "${PROJECT_SOURCE_DIR}/include")
#target_link_libraries(PrintSrc)