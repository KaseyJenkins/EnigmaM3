cmake_minimum_required(VERSION 3.19)
project(
        Enigma
        VERSION 0.2.0
        LANGUAGES CXX)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(apps)