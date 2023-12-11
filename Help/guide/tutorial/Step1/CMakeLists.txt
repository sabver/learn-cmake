cmake_minimum_required(VERSION 3.10)
project(Tutorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#  to copy a given input file to an output file and substitute some variable values in the input file content.
configure_file(TutorialConfig.h.in TutorialConfig.h)

add_executable(Tutorial tutorial.cxx)

# to specify where the executable target should look for include files.
target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")