cmake_minimum_required(VERSION 3.16)
project(game_engine)

set(CMAKE_CXX_STANDARD 20)

add_executable(game_engine main.cpp vec3.h ray.h hittable.h sphere.h hittable_list.h)