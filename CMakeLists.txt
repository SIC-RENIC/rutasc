cmake_minimum_required(VERSION 3.15)
project(rutasc C)

set(CMAKE_C_STANDARD 11)

add_executable(rutasc
        src/main.c src/algoritmo.c src/recuperadatos.c src/salidas.c)

target_link_libraries(rutasc m)
