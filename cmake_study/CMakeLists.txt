cmake_minimum_required(VERSION 3.5)
project(cmake_study)

set(CMAKE_CXX_STANDARD 14)

# Add block directories
add_subdirectory(hello)
add_subdirectory(world_lib)
add_subdirectory(share_lib)

include_directories(./)

add_executable(cmake_study main.cpp)
target_link_libraries(cmake_study world_lib share_lib)