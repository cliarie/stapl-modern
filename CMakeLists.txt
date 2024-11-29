cmake_minimum_required(VERSION 3.20)
project(stapl-modern LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Boost 1.86 REQUIRED COMPONENTS system serialization program_options)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/include)

find_package(TBB REQUIRED)

add_library(stapl-modern
    src/algorithm.cpp
    src/container.cpp
    src/executor.cpp
    src/utility.cpp
)
target_link_libraries(stapl-modern ${Boost_LIBRARIES})
target_link_libraries(stapl-modern TBB::tbb)

enable_testing()
add_subdirectory(tests)
