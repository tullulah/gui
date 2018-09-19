cmake_minimum_required(VERSION 2.8)
# 
# CMake file for Test App
#
project (TestApp)

set(TEST_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

set(TEST_HEADERS

)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

set(COMMON_LIBRARIES
	${SDL2_LIBRARY}
)

# define target
include_directories(${COMMON_INCLUDE_DIRS} ${CMAKE_CURRENT_SOURCE_DIR}/src)
add_executable(TestApp ${TEST_SOURCES} ${TEST_HEADERS})
target_link_libraries(TestApp ${COMMON_LIBRARIES} ${SDL2_LIBRARIES} UI)