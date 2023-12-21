cmake_minimum_required(VERSION 3.26)
project(Cpp_Course_Udemy_OOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP01 OOP01/Main.cpp
        OOP01/Otomobil.cpp)

add_executable(OOP02 OOP02/Main02.cpp
        OOP02/Otomobil_Constructor.cpp)

add_executable(OOP03 OOP03/Main03.cpp
        OOP03/Otomobil_Encapsulation.cpp)

add_executable(OOP04 OOP04/Main04.cpp
        OOP04/Otomobil_Pointer.cpp)

add_executable(OOP05 OOP05/Main05.cpp)

add_executable(OOP06 OOP06/Main06.cpp
        OOP06/Otomobil_MemoryLeak.cpp)

add_executable(OOP07 OOP07/Main07.cpp
        OOP07/Hayvan.cpp
        OOP07/Kedi.cpp
        OOP07/Kopek.cpp
        OOP07/Kus.cpp)

add_executable(OOP08 OOP08/Main08_Polymorphism.cpp)
add_executable(OOP08_2 OOP08/PolymorphismQuestion.cpp)

add_executable(OOP09 OOP09/Otomobil_FriendMethod.cpp)

add_executable(OOP10 OOP10/Hesaplayici.cpp
        OOP10/Ogrenci_FriendClass.cpp)

add_executable(OOP11 OOP11/Hesaplayici_TryCatch.cpp)
add_executable(OOP11_2 OOP11/Test.cpp)
add_executable(OOP11_3 OOP11/Main11.cpp
        OOP11/HataSinifi.cpp)

add_executable(OOP12 OOP12/Main12_List.cpp)