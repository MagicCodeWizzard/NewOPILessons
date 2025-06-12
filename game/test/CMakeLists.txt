project(UnitTestingExample_Tests)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(SOURSES "test_utils.cpp")

set(SOURSES_GTEST "gtest_utils.cpp")

add_executable(${PROJECT_NAME} ${SOURSES})
target_link_libraries(${PROJECT_NAME} PUBLIC UnitTestingExample_Lib)

add_executable(GTest_${PROJECT_NAME} ${SOURSES_GTEST})
target_link_libraries(
    GTest_${PROJECT_NAME} PUBLIC 
    GTest::gtest_main 
    UnitTestingExample_Lib
)
