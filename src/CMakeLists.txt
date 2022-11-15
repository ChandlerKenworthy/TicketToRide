cmake_minimum_required(VERSION 3.2)
project(TicketToRide VERSION 0.1.0)

set(CMAKE_VERBOSE_MAKEFILE ON)

add_executable(ticket-to-ride 
    TicketToRide.cpp
    items/card.hpp
    items/card.cpp
)

target_include_directories(ticket-to-ride
    PRIVATE items
)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wfatal-errors -Wshadow -Wpedantic")

target_compile_features(ticket-to-ride
    PRIVATE cxx_auto_type cxx_range_for cxx_uniform_initialization
)