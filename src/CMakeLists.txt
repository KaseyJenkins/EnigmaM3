# Make an automatic library - will be static or dynamic based on user setting
add_library(enigma_library enigma.cpp)

set_target_properties(
        enigma_library PROPERTIES
        SOVERSION 0
        VERSION 0.1.0
)

target_include_directories(enigma_library PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_compile_features(enigma_library PUBLIC cxx_std_17)