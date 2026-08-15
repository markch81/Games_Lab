# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
# versions 3.3 or greater to better handle find_package(Boost REQUIRED)
cmake_minimum_required(VERSION 3.30)

project(Chance)

find_package(Boost REQUIRED)

add_library(Chance src/dice.cpp)

# PUBLIC needed to make both hello.h and hello library available elsewhere in project
target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Tell compiler to use C++20 features. The code doesn't actually use any of them.
target_compile_features(Chance PUBLIC cxx_std_20)