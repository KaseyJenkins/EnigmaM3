cmake_minimum_required(VERSION 3.19)
project(
        EnigmaM3
        VERSION 0.3.1
        LANGUAGES CXX)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(apps)