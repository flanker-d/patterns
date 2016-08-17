cmake_minimum_required(VERSION 2.8)
set(PROJECT ducks)
project(${PROJECT})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -std=c++11")
set(SOURCES_FILES
    main.cpp
    Ducks/duckbase.cpp
    Ducks/exoticduck.cpp
    Ducks/rubberduck.cpp
    Ducks/simpleduck.cpp
    Ducks/upgradableduck.cpp
    Ducks/woodenduck.cpp
    Fly/flywithwings.cpp
    Fly/nofly.cpp
    Quack/exoticquack.cpp
    Quack/noquack.cpp
    Quack/simplequack.cpp
)
set(HEADERS_FILES
    Ducks/duckbase.h
    Ducks/exoticduck.h
    Ducks/rubberduck.h
    Ducks/simpleduck.h
    Ducks/upgradableduck.h
    Ducks/woodenduck.h
    Fly/flywithwings.h
    Fly/iflyable.h
    Fly/nofly.h
    Quack/exoticquack.h
    Quack/iquackable.h
    Quack/noquack.h
    Quack/simplequack.h
)

add_executable(${PROJECT_NAME} ${SOURCES_FILES} ${HEADERS_FILES})
