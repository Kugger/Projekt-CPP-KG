cmake_minimum_required(VERSION 2.8.9)
project(src)
set(CMAKE_BUILD_TYPE Release)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(myProgram SHARED ${SOURCES})
add_executable(myProgram ${SOURCES})

install(TARGETS myProgram DESTINATION /tmp)