cmake_minimum_required(VERSION 3.16)
project(408-DataStructure-Lab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 每个 cpp 是一个独立练习入口；目标名由其相对路径生成。
# 例如 02_LinearList/2.3_LinkedList/2.3.1_*.cpp 会生成独立的 ds_... 目标。
file(GLOB_RECURSE LEARNING_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

foreach(source_file IN LISTS LEARNING_SOURCES)
    file(RELATIVE_PATH relative_source "${CMAKE_CURRENT_SOURCE_DIR}" "${source_file}")
    string(REGEX REPLACE "\\.cpp$" "" target_suffix "${relative_source}")
    string(REGEX REPLACE "[^A-Za-z0-9_]+" "_" target_suffix "${target_suffix}")
    set(target_name "ds_${target_suffix}")

    if(TARGET "${target_name}")
        message(FATAL_ERROR "Duplicate learning target name: ${target_name}")
    endif()

    add_executable("${target_name}" "${source_file}")
endforeach()
