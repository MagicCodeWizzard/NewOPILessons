project(UnitTestingExample_Tests)

set(SOURSES "test_utils.cpp")

add_executable(${PROJECT_NAME} ${SOURSES})
target_link_libraries(${PROJECT_NAME} PUBLIC UnitTestingExample_Lib)
