add_library(calculator STATIC src/calculator.cc)
set_target_properties(calculator PROPERTIES
    CXX_STANDARD 17
    CMAKE_CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)
target_include_directories(calculator PUBLIC include)