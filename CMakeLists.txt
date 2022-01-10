cmake_minimum_required(VERSION 3.21)
project(design_patterns)

set(CMAKE_CXX_STANDARD 14)

include_directories(AbstractFactory)
include_directories(Builder)
include_directories(Factory)
include_directories(Prototype)
include_directories(Singleton)

add_executable(design_patterns
        AbstractFactory/Main.cpp
        AbstractFactory/User.h
        AbstractFactory/UserFactory.h
        AbstractFactory/UserGenerator.h
        Builder/Instrument.h
        Builder/InstrumentBuilder.h
        Builder/InstrumentCreator.h
        Builder/Main.cpp
        Builder/PostTradeParam.h
        Builder/TradingParam.h
        Factory/Main.cpp
        Factory/Timer.h
        Factory/TimerFactory.h
        Prototype/Main.cpp
        Prototype/Message.h
        Prototype/MessagePrototype.h
        Singleton/Main.cpp
        Singleton/Utils.h)
