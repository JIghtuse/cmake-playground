project(cmake_experiments)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD_REQUIRED 17)
set(CMAKE_CXX_STANDARD 17)

find_package(GTest)

enable_testing()

add_library(some_library
        src/lib.cpp
        src/lib.h)

target_include_directories(some_library
        PRIVATE
        src)

add_executable(some_library_unit_tests
        test/some_library_unit_tests.cpp)
target_link_libraries(some_library_unit_tests
        some_library
        ${GTEST_LIBRARY}
        ${GTEST_MAIN_LIBRARY}
)
target_include_directories(some_library_unit_tests
        PRIVATE
        src)

add_test(NAME some_library_unit_tests COMMAND some_library_unit_tests)
set_tests_properties(some_library_unit_tests
        PROPERTIES LABELS "UnitTest;some_library")
gtest_discover_tests(some_library_unit_tests)


add_executable(some_library_integration_tests
        test/some_library_integration_tests.cpp)
target_link_libraries(some_library_integration_tests
        some_library
        ${GTEST_LIBRARY}
        ${GTEST_MAIN_LIBRARY}
)
target_include_directories(some_library_integration_tests
        PRIVATE
        src)

add_test(NAME some_library_integration_tests COMMAND some_library_integration_tests)
set_tests_properties(some_library_integration_tests
        PROPERTIES LABELS "IntegrationTest;some_library")
gtest_discover_tests(some_library_integration_tests)
