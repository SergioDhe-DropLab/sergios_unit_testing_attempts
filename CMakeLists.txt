cmake_minimum_required(VERSION 3.0.0)
project(unit_tester VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_executable(unit_tester main.c)
target_include_directories(unit_tester PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
