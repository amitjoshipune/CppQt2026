cmake_minimum_required(VERSION 3.19)
project(HelloCppQt LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(HelloCppQt
    main.cpp
)

target_link_libraries(HelloCppQt
    PRIVATE
        Qt::Core
)

install(TARGETS HelloCppQt
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
