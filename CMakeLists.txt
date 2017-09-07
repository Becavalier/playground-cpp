cmake_minimum_required(VERSION 3.9)
project(PLAYGROUND_CPP)

# Prior settings
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin/)


# C++11 support
add_compile_options(-std=c++11)

# Enable verbose
set(CMAKE_VERBOSE_MAKEFILE on)

# Executables
set(RAND_SRC_LIST rand.cpp)
add_executable(rand ${RAND_SRC_LIST})

set(BASIC_SRC_LIST basic.cpp)
add_executable(basic ${BASIC_SRC_LIST})

set(CLASS_SRC_LIST class.cpp)
add_executable(class ${CLASS_SRC_LIST})

set(HELLOWORLD_SRC_LIST helloworld.cpp)
add_executable(helloworld ${HELLOWORLD_SRC_LIST})

set(SIZEOF_SRC_LIST sizeof.cpp)
add_executable(sizeof ${SIZEOF_SRC_LIST})

set(STRUCT_SRC_LIST struct.cpp)
add_executable(struct ${STRUCT_SRC_LIST})

set(VARIABLES_SRC_LIST variables.cpp)
add_executable(variables ${VARIABLES_SRC_LIST})


# Debug info
message("PROJECT_SOURCE_DIR ->" ${PROJECT_SOURCE_DIR})
message("PROJECT_BINARY_DIR ->" ${PROJECT_BINARY_DIR})

