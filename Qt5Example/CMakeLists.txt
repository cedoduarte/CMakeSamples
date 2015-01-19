cmake_minimum_required(VERSION 2.3)

# Nombre del proyecto: MiAplicacionQt
project(MiAplicacionQt)

#set(CMAKE_PREFIX_PATH $ENV{QTDIR}) # No es necesario en Windows

# Nombre del ejecutable de salida
set(EJECUTABLE ${PROJECT_NAME})

# Agrega el directorio actual para los includes
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Ejecuta automáticamente el Compilador de Meta Objetos de Qt
set(CMAKE_AUTOMOC ON)

# Encuentra la biblioteca Qt5Widgets
find_package(Qt5Widgets)

# Establece la construcción en modo release
set(CMAKE_BUILD_TYPE "Release")

# Lista de los archivos de código fuente
set(SRC 
	main.cpp
	dialog.cpp)

# Ensambla el ejecutable con ambiente gráfico (WIN32)
add_executable(${EJECUTABLE} WIN32 ${SRC})

# Agrega bibliotecas externas
# Agrega el módulo widgets del paquete encontrado en la línea 18
target_link_libraries(${EJECUTABLE} Qt5::Widgets qtmain)