cmake_minimum_required(VERSION 2.3)

# Nombre del proyecto: MiBiblioteca
project(MiBiblioteca)

# Nombre de archivo de salida: MiBiblioteca
set(ARCHIVO_SALIDA "${PROJECT_NAME}")

# Directorio a bibliotecas externas
#set(LIBDIR "path/to/libs")

# Nombres de las bibliotecas externas
#set(LIBS lib1name lib2name)

# Directorios de include
set(INCLUDEPATH ".")

# Macro que defina la compilación de la biblioteca según el código fuente
add_definitions(-D${PROJECT_NAME}LIB)

# Agrega todos los archivos con extensión .C y .CPP al proyecto
aux_source_directory("." SRC)

# Agrega los directorios de include al proyecto
include_directories(${INCLUDEPATH})

# Agrega los directorios de bibliotecas externas
#link_directories(${LIBDIR})

# Biblioteca de salida
add_library(${ARCHIVO_SALIDA} SHARED ${SRC})

# Agrega las bibliotecas externas
#target_link_libraries(${ARCHIVO_SALIDA} ${LIBS})