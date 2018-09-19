cmake_minimum_required(VERSION 2.8)

# 
# CMake file for UI library
#
project (UI)

set(UI_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/src/UIComponent.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/mainApp.h
)

set(UI_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/src/UIComponent.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/mainApp.cpp
)

include_directories(${COMMON_INCLUDE_DIRS})
add_library(UI STATIC ${UI_SOURCES} ${UI_HEADERS})
target_link_libraries(UI ${COMMON_LIBRARIES} ${SDL2_LIBRARY})
