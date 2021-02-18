cmake_minimum_required(VERSION 3.17)
project(Tarea_1)

set(CMAKE_CXX_STANDARD 17)

file( GLOB APP_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp )
foreach( sourcefile ${APP_SOURCES} )
    file(RELATIVE_PATH filename src ${sourcefile})
    string( REPLACE ".cpp" "" file ${filename} )
    add_executable( ${file} ${sourcefile} )
endforeach( sourcefile ${APP_SOURCES} )