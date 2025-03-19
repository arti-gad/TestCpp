cmake_minimum_required (VERSION 3.25)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем параметры компиляции исходных файлов
add_compile_options(-O0 -g3 -Wall -fmessage-length=0)

find_package(fmt QUIET)
find_package(Boost 1.74 REQUIRED)

# Добавляем исполняемые файлы в проекты, используя указанные исходные файлы (.c, .cpp, .h)
# Генерируются автоматически!!!
add_executable(
	src
	"main.cpp"
)

target_link_libraries(src fmt::fmt)
target_link_libraries(src ${Boost_LIBRARIES})

# Добавляем внешние каталоги, каталоги проекта и каталоги библиотек в сборку
include_directories(src ${PROJECT_SOURCE_DIR}/src)
include_directories(SYSTEM ${Boost_INCLUDE_DIRS})

# Добавляем определения препроцессора при компиляции исходных файлов
#add_compile_definitions(NDEBUG)

# Добавляем путь до библиотек и сами библиотеки
