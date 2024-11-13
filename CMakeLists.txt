# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.

cmake_minimum_required (VERSION 3.25)

project ("testcpp")

# Включите подпроекты.
add_subdirectory ("src")
