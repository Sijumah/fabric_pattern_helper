cmake_minimum_required(VERSION 3.0.0)
project(fabric_pattern_helper VERSION 0.1.0)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
add_compile_options(/std:c++latest)



#SET(SFML_DIR C:/SFML-2.5.1/lib/cmake/SFML)
#set(SFML_INCLUDES C:/SFML-2.5.1/include C:/SFML-2.5.1/include/SFML C:/SFML-2.5.1/include/SFML/*.hpp)




#include(CTest)
#enable_testing()

add_executable(fabric_pattern_helper main.cpp)


#set (INTERNAL_INCLUDES SFML_INCLUDES ${CMAKE_PROJECT_NAME}/Headers/Sijf ${CMAKE_PROJECT_NAME}/Headers/Sijg ${CMAKE_PROJECT_NAME}/Headers/Sijs)
#set(SFML_STATIC_LIBRARIES TRUE)
#find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)



#target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-audio)
#target_include_directories(${PROJECT_NAME} PUBLIC ${INTERNAL_INCLUDES})



#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
