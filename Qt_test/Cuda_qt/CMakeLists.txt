cmake_minimum_required(VERSION 2.8)

project(Cuda_qt)
#add_executable(${PROJECT_NAME} "test")

cuda_add_executable(${PROJECT_NAME} "test.cu");


FIND_PACKAGE(CUDA REQUIRED)
