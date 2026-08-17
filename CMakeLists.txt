cmake_minimum_required(VERSION 3.14)
project(
    video3
    VERSION 0.0.0
    DESCRIPTION "sorting user objects"
    LANGUAGES CXX
)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(LINK_FLAGS "-mwindows -mconsole -Wl, -subsystem,console")

set(source
src/book.h
src/book.cpp
src/main.cpp
)

find_package(Qt5 COMPONENTS Core REQUIRED)

#add_executable(test WIN32 main.cpp)
add_executable(test ${source})

#target_link_libraries(test PRIVATE Qt5::Core ${LINK_FLAGS})
target_link_libraries(test PRIVATE Qt5::Core)

#set_property(TARGET test PROPERTY WIN32_EXECUTABLE true)

