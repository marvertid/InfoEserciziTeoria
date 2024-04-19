cmake_minimum_required(VERSION 3.28)
project(Esercizio_Barattoli_di_marmellata)

set(CMAKE_CXX_STANDARD 17)

add_executable(Esercizio_Barattoli_di_marmellata main.cpp
        BarattoloDiMarmellata.cpp
        barattoloDiMarmellata.h
        Data.cpp
        data.h
        Pila.cpp
        pila.h
        Nodo.cpp
        nodo.h
        Queue.cpp
        queue.h)
