cmake_minimum_required(VERSION 3.0)
project(cpp07)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp07 ex02/main.cpp ex02/Array.cpp
        ex02/main.cpp)
target_compile_options(cpp07 PRIVATE -Wall -Wextra -Werror -std=c++98 -I./ex02)