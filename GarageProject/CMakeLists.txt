cmake_minimum_required(VERSION 3.12)
project(GarageProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GarageProject
        Battery.cpp
        Battery.h
        Car.cpp
        Car.h
        Coden.cpp
        Coden.h
        ElectricEngine.cpp
        ElectricEngine.h
        Engine.cpp
        Engine.h
        GasolineEngine.cpp
        GasolineEngine.h
        Main.cpp
        Malfunction.cpp
        Malfunction.h
        Motorcycle.cpp
        Motorcycle.h
        OilPump.cpp
        OilPump.h
        Owner.cpp
        Owner.h
        Part.cpp
        Part.h
        Person.cpp
        Person.h
        Profession.h
        Veichle.cpp
        Veichle.h
        VeichleProblems.cpp
        VeichleProblems.h
        Wheel.cpp
        Wheel.h
        Worker.cpp
        Worker.h)
