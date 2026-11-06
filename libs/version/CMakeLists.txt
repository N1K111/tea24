# Generate version configuration header
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/version_config.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/version_config.h
    @ONLY
)

# Create static library
add_library(version STATIC
    src/version.cpp
)

# Configure include directories
target_include_directories(version
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)