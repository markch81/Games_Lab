# version 3.11 or later of CMake needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(
    MSC_Games_Lab
    VERSION 0.1
    DESCRIPTION "Mark's playground for game research and development")

add_subdirectory(libChance)   # look in hello subdirectory for CMakeLists.txt to process