cmake_minimum_required(VERSION 3.21)

project(off_duty)

add_executable(${PROJECT_NAME} main.c)

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin)
