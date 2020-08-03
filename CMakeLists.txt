project(testdoctest)

set(CMAKE_CXX_STANDARD 20)

add_library(test_lib
    #SHARED
    test.cpp
    )

add_executable(test_doctest
    main.cpp
    )

target_link_libraries(test_doctest
    test_lib
    )

