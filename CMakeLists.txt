cmake_minimum_required(VERSION 3.24)
project(main)

# Our project
set(SOURCE_FILES
    main.cpp 
    balance_vector.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})