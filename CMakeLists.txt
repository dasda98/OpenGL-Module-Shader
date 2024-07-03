cmake_minimum_required(VERSION 3.28)
project(Shader C)

set(CMAKE_C_STANDARD 17)

set(INCLUDE_DIRS
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/lib/glad/include
)

set(SOURCES
        ${PROJECT_SOURCE_DIR}/src/shader.c
        ${PROJECT_SOURCE_DIR}/lib/glad/src/glad.c
)

add_executable(Shader ${SOURCES})

target_include_directories(Shader PRIVATE ${INCLUDE_DIRS})