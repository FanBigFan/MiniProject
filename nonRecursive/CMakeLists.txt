cmake_minimum_required(VERSION 3.25)
project(nonRecursive)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(nonRecursive
        include/InorderTraversal_NR.h
        include/MyTreeNode.h
        include/PostorderTraversal_NR.h
        include/PreorderTraversal_NR.h
        src/InorderTraversal_NR.cpp
        src/MyTreeNode.cpp
        src/PostorderTraversal_NR.cpp
        src/PreorderTraversal_NR.cpp
        src/MyStack.cpp
        include/MyStack.h
        src/NonRecursive.cpp
        include/NonRecursiveHeads.h
        )
