project(UnitTestingExample)

set(LIB_SOURCES "utils.cpp")

# Оголошення переліку файлів
set(SOURSES "main.cpp")

add_library(${PROJECT_NAME}_Lib STATIC ${LIB_SOURCES})
target_include_directories(
    ${PROJECT_NAME}_Lib 
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)

add_executable(${PROJECT_NAME} ${SOURSES})
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_Lib)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/test)
