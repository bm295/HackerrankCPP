cmake_minimum_required(VERSION 3.16)

project(HackerrankCPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

file(GLOB EXERCISE_SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/*.cpp")

set(RUNNABLE_TARGETS "")

foreach(SOURCE_FILE IN LISTS EXERCISE_SOURCES)
    file(READ "${SOURCE_FILE}" SOURCE_CONTENTS)
    if(SOURCE_CONTENTS MATCHES "int[ \t\r\n]+main[ \t\r\n]*\\(")
        get_filename_component(TARGET_NAME "${SOURCE_FILE}" NAME_WE)
        add_executable("${TARGET_NAME}" "${SOURCE_FILE}")
        list(APPEND RUNNABLE_TARGETS "${TARGET_NAME}")
    else()
        get_filename_component(SKIPPED_NAME "${SOURCE_FILE}" NAME)
        message(STATUS "Skipping snippet-only file (no main): ${SKIPPED_NAME}")
    endif()
endforeach()

list(SORT RUNNABLE_TARGETS)
message(STATUS "Runnable targets: ${RUNNABLE_TARGETS}")
