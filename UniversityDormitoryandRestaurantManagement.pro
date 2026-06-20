QT += core gui widgets
CONFIG += c++17
TARGET = UDRMS
TEMPLATE = app

SOURCES += \
    Person.cpp \
    main.cpp \
    Student.cpp \
    Room.cpp \
    Restaurant.cpp \
    Dormitory.cpp \
    University.cpp \
    FileManager.cpp \
    OOPproject.cpp

HEADERS += \
    Person.h \
    Student.h \
    Room.h \
    Restaurant.h \
    Dormitory.h \
    University.h \
    FileManager.h \
    OOPproject.h

FORMS += \
    OOPproject.ui

 RESOURCES += icons.qrc