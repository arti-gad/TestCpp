cmake_minimum_required (VERSION 3.25)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем параметры компиляции исходных файлов
add_compile_options(-O0 -g3 -Wall -fmessage-length=0)

# Добавляем исполняемые файлы в проекты, используя указанные исходные файлы (.c, .cpp, .h)
# Генерируются автоматически!!!
add_executable(
	src
	"main.cpp"
)

# Добавляем внешние каталоги, каталоги проекта и каталоги библиотек в сборку
include_directories(src ${PROJECT_SOURCE_DIR}/src)

# Добавляем определения препроцессора при компиляции исходных файлов
#add_compile_definitions(NDEBUG)

# Добавляем путь до библиотек и сами библиотеки
