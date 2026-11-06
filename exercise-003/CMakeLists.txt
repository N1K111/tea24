# Executable erstellen
add_executable(exercise-003 main.cpp)

# Bibliotheken einbinden
target_link_libraries(exercise-003
    PRIVATE
        version
        fmt::fmt
)