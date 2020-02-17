cmake_minimum_required(VERSION 3.5)

# 组织信息
set(IDENTIFIER "ms-qt")
set(COPYRIGHT "Copyright ©2020 msqt")
# 项目名称 版本
project(base-qquickview VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# c++ 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 平台判断
# LINUX平台判断
if (UNIX AND NOT APPLE)
    set(LINUX 1)
endif (UNIX AND NOT APPLE)

find_package(Qt5 COMPONENTS Core Quick Qml Widgets LinguistTools QuickControls2 REQUIRED)

# qrc 资源
set(app_QRC
        qml.qrc
        )

# 代码
set(app_SRC
        src/BaseQQuickView.h
        src/BaseQQuickView.cpp
        src/AppQQuickView.cpp
        src/AppQQuickView.h
        src/main.cpp
        )


QT5_ADD_RESOURCES(app_QRC_SRC ${app_QRC})

add_executable(${PROJECT_NAME}
        ${app_SRC}
        ${app_QRC_SRC}
        )


target_compile_definitions(${PROJECT_NAME}
        PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(${PROJECT_NAME}
        PRIVATE Qt5::Core Qt5::Quick Qt5::Widgets)

