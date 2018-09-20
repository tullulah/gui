cmake_minimum_required(VERSION 2.8)

# 
# CMake file for UI library
#
project (UI)

set(UI_HEADERS
	/*components*/
	${CMAKE_CURRENT_SOURCE_DIR}/src/UIComponent.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/ViewManager.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/components/UIImage.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/components/UIScreen.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/components/UISplash.h	
	${CMAKE_CURRENT_SOURCE_DIR}/src/mainApp.h

	/*Configuration*/
	${CMAKE_CURRENT_SOURCE_DIR}/src/configuration.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/configuration/configurationLoader.h
)

set(UI_SOURCES
	/*components*/
	${CMAKE_CURRENT_SOURCE_DIR}/src/UIComponent.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/ViewManager.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/components/UIImage.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/components/UIScreen.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/components/UISplash.cpp	
	${CMAKE_CURRENT_SOURCE_DIR}/src/mainApp.cpp

	/*Configuration*/
	${CMAKE_CURRENT_SOURCE_DIR}/src/configuration.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/configuration/configurationLoader.cpp
)

include_directories(${COMMON_INCLUDE_DIRS})
add_library(UI STATIC ${UI_SOURCES} ${UI_HEADERS})
target_link_libraries(UI ${COMMON_LIBRARIES} ${SDL2_LIBRARY})