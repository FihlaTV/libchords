cmake_minimum_required(VERSION 3.0)

cmake_policy(SET CMP0048 NEW)

project(libchords VERSION 0.1.0)

set(SOURCES src/chords_utils.c)
set(TEST_SOURCES src/chords_test.c)
set(HEADERS src/chords.h)

add_executable(chords_test ${TEST_SOURCES})
add_library(chords ${SOURCES})
target_link_libraries(chords_test m chords)
