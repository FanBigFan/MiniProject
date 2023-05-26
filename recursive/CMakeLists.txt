cmake_minimum_required(VERSION 3.25)
project(recursive)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(recursive
        include/InorderTraversal.h
        include/MyTreeNode.h
        include/PostorderTraversal.h
        include/PreorderTraversal.h
        src/InorderTraversal.cpp
        src/MyTreeNode.cpp
        src/PostorderTraversal.cpp
        src/PreorderTraversal.cpp
        src/Recursive.cpp
        include/RecursiveHeads.h
        )
