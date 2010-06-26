# -------------------------------------------------
# Project created by QtCreator 2010-04-14T15:48:19
# -------------------------------------------------
QT += opengl
TARGET = ../MeshSuite
TEMPLATE = app
HEADERS += headers/MainWindow.h \
    headers/GLWidget.h \
    headers/Mesh.h \
    headers/Triangle.h \
    headers/Vertex.h \
    headers/LoadMeshDialog.h \
    headers/RegularInsertionFactory.h \
    headers/BorderInsertionFactory.h \
    headers/RestrictedInsertionFactory.h \
    headers/Constant.h \
    headers/InsertionType.h \
    headers/InsertionTypeFactory.h \
    headers/InsertionMethod.h \
    headers/InsertionMethodFactory.h \
    headers/FlipDiagonalInsertionType.h \
    headers/CavityInsertionType.h \
    headers/TriangleSelection.h \
    headers/TriangleSelectionFactory.h \
    headers/PreProcessFactory.h \
    headers/PreProcess.h
FORMS += forms/MainWindow.ui \
    forms/LoadMeshDialog.ui
SOURCES += sources/Vertex.cpp \
    sources/Triangle.cpp \
    sources/Mesh.cpp \
    sources/MainWindow.cpp \
    sources/main.cpp \
    sources/LoadMeshDialog.cpp \
    sources/GLWidget.cpp \
    sources/InsertionTypeFactory.cpp \
    sources/InsertionMethodFactory.cpp \
    sources/TriangleSelection.cpp \
    sources/TriangleSelectionFactory.cpp \
    sources/PreProcess.cpp \
    sources/PreProcessFactory.cpp
