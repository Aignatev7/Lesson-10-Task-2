# CMakeList.txt: проект CMake для Lesson 10 Task 2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Lesson 10 Task 2")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeTarget "Lesson 10 Task 2.cpp"  "EquilateralTriangle.cpp" "EquilateralTriangle.h" "Figure.h" "Figure.cpp" "IsoscelesTriangle.cpp" "IsoscelesTriangle.h" "Parallelogram.h" "Parallelogram.cpp" "Quadrangle.cpp" "Quadrangle.h" "Rectangle.h" "Rectangle.cpp" "Rhomb.cpp" "Rhomb.h" "RightTriangle.h" "RightTriangle.cpp" "Square.cpp" "Square.h" "Triangle.h" "Triangle.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
