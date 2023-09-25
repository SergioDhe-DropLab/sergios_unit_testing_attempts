cmake_minimum_required(VERSION 3.0.0)
project(unit_tester VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

set(SOURCE_FILES
    src/number_generator.c
    src/number_parser.c
    src/user_io.c)

add_executable(unit_tester main.c ${SOURCE_FILES})

# Specify include directories
target_include_directories(unit_tester PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# Remove the incorrect target_link_libraries line
# target_link_libraries(unit_tester PRIVATE ${SOURCE_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
