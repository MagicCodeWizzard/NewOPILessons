cmake_minimum_required(VERSION 3.10)

# Створення проекту
project(MyAwesomeProgram)

set(SOME_CACHE_VALUE CACHE STRING "Hello world")
set(TESTS_ENABLED CACHE BOOL FALSE)

message("Some value here -> ${SOME_CACHE_VALUE}")

set(LIB_HEADERS "common/lib.hpp")
set(LIB_SOURCES "common/lib.cpp")

# Оголошення переліку файлів
set(SOURSES "main.cpp"
            "main_logic.cpp"
)

set(SOURSES_TEST "test_logic.cpp")

message("${SOURSES}")
message("${SOURSES_TEST}")

add_library(MyLib STATIC ${LIB_SOURCES})
target_include_directories(MyLib PUBLIC "common/include")
target_compile_definitions(MyLib PUBLIC "-DLIBRARY_VERSION_MAJOR=5")
#target_compile_definitions(MyLib PUBLIC "-DTHIS_IS_LINUX")

add_executable(${PROJECT_NAME} ${SOURSES})
target_link_libraries(${PROJECT_NAME} MyLib)

if (TESTS_ENABLED)
    message("Тести будуть!")
    add_executable(${PROJECT_NAME}_Test ${SOURSES_TEST})
    target_link_libraries(${PROJECT_NAME}_Test MyLib)
else()
    message("Тестів не буде!")
endif()

foreach(a ${SOURSES})
    message("Зараз працюємо над файлом: '${a}'")
endforeach()

add_subdirectory("game")
