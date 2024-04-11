cmake_minimum_required(VERSION 3.28)
project(Ass4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ass4 main.cpp
        City.cpp
        Human.cpp
        Zombie.cpp
        Organism.cpp)
