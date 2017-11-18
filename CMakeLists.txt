cmake_minimum_required(VERSION 2.8.4)
project(SDL-Dynamic)
set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES ./main.cpp)
add_executable(SDL-Dynamic ${SOURCE_FILES})

target_link_libraries(SDL-Dynamic "-lSDL2main -lSDL2")
