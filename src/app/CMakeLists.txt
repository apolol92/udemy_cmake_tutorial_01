add_executable(app src/main.cc)
set_target_properties(app PROPERTIES
    CXX_STANDARD 17
    CMAKE_CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)
target_link_libraries(app calculator)