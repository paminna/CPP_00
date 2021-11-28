cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 98)

#add_compile_options(-Wall -Wextra -Werror -std=c++98)

add_executable(untitled ex00/ex00.cpp ex01/ex01.cpp ex01/Phonebook.cpp ex01/Phonebook.hpp ex01/Contact.cpp)
add_executable(ex02 ex02/Account.cpp ex02/Account.hpp ex02/test.cpp)