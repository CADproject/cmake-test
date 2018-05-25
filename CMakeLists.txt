cmake_minimum_required(VERSION 3.11.1)

project(cmake-test)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/headers/)

#set(SOURCE main.cpp plus.cpp mult.cpp)
file(GLOB SOURCE "*.cpp")
file(GLOB_RECURSE HEADERS "*.h")

add_executable(${PROJECT_NAME} ${SOURCE} ${HEADERS})

target_link_libraries(${PROJECT_NAME})
