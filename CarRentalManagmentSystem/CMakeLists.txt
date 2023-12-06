cmake_minimum_required(VERSION 3.20)
project(CarRentalManagementSystem)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(TARGET CarRentalManagmentSystem)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(${TARGET} ${SOURCES})
