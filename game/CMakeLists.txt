project(UnitTestingExample)

# Оголошення переліку файлів
set(SOURSES "main.cpp"
            "utils.cpp"
)

add_executable(${PROJECT_NAME} ${SOURSES})
