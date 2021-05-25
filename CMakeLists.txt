CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
    unit_test.cpp
    visitor.cpp
    add.cpp
    mult.cpp
    div.cpp
    op.cpp
    pow.cpp
    sub.cpp
)

ADD_EXECUTABLE(lab
    main.cpp
    visitor.cpp
    add.cpp
    mult.cpp
    div.cpp
    op.cpp
    pow.cpp
    sub.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
