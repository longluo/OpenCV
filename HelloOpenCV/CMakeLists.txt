cmake_minimum_required(VERSION 3.16)

project(helloOpenCV)

set(CMAKE_CXX_STANDARD 11)

add_executable(helloOpenCV main.cpp)

find_package( OpenCV REQUIRED )

IF(OpenCV_FOUND)
    INCLUDE_DIRECTORIES( ${OpenCV_INCLUDE_DIRS} )
    TARGET_LINK_LIBRARIES(helloOpenCV ${OpenCV_LIBS})
ELSE (OpenCV_FOUND)
    MESSAGE(FATAL_ERROR "OpenCV library not found")
ENDIF (OpenCV_FOUND)


