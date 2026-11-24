cmake_minimum_required(VERSION 3.16)
project(ping-optimizer-gaming CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pingoptimizergaming
    src/main.cpp
    src/routes.cpp
    src/tweaks.cpp
)

target_include_directories(pingoptimizergaming PRIVATE include)

if(WIN32)
    target_link_libraries(pingoptimizergaming PRIVATE userenv)
endif()
