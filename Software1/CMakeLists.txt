cmake_minimum_required(VERSION 3.23.2)

project(Codigo_gr4)
#comment

include_directories(INCLUDE)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB SOURCES "SRC/*.cpp")

add_executable(Ejecutablee_gr4.bin ${SOURCES})
