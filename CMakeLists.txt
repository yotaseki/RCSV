project(RCSV)
add_definitions(-std=c++11)
set(RCSV_SRCS
    rcsv.h
    rcsv.cpp
    )
add_executable(RCSV
    main.cpp
    ${RCSV_SRCS}
    )
