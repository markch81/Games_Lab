# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.30)

project(CppMult)

find_package(Boost REQUIRED)
find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 CONFIG REQUIRED)

include_directories(${PYTHON_INCLUDE_DIRS})

# add_library(CppMult SHARED src/cppmult.cpp src/pybind11_wrapper.cpp)
pybind11_add_module(CppMult src/cppmult.cpp src/pybind11_wrapper.cpp)

# PUBLIC needed to make both hello.h and hello library available elsewhere in project
target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Tell compiler to use C++20 features. The code doesn't actually use any of them.
target_compile_features(CppMult PUBLIC cxx_std_20)