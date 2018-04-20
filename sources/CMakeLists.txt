cmake_minimum_required(VERSION 2.8)
project(testForApplication)
set(sources main.cpp
	Application.cpp)
set(headers Application.h)
add_executable(${PROJECT_NAME} ${sources} ${headers})
