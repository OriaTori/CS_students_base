cmake_minimum_required (VERSION 3.9)
project(studentsBase)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(./src SOURCE)
include_directories ("${PROJECT_SOURCE_DIR}/include")

add_executable(${PROJECT_NAME} ${SOURCE})
add_executable(${PROJECT_NAME} ${SOURCE})
