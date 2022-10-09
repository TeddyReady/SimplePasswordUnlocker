cmake_minimum_required(VERSION 3.16.3)
project(PasswordUnlocker)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
set(SOURCES main.cpp crc.c crc.h)

add_executable(${PROJECT_NAME} ${SOURCES})
