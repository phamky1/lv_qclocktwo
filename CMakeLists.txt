cmake_minimum_required(VERSION 3.10)

project(licheeMac C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)
set( CMAKE_C_FLAGS "-Wall -Wextra -Wno-unused -g" )
set( CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-unused -g" )

find_package(SDL2 REQUIRED SDL2)
include_directories(
    ${SDL2_INCLUDE_DIRS}
    ${SDL2_INCLUDE_DIRS}/../
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/lvgl
    ${PROJECT_SOURCE_DIR}/ui
)

FILE(GLOB_RECURSE LVGL_Sources CONFIGURE_DEPENDS lvgl/*.c)
FILE(GLOB_RECURSE UI_Sources CONFIGURE_DEPENDS ui/*.c ui/*.cpp)

add_executable(${PROJECT_NAME} main.c ${LVGL_Sources} ${UI_Sources})

#string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)

target_link_libraries(${PROJECT_NAME} PRIVATE ${SDL2_LIBRARIES})
