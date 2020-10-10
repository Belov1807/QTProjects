QT       += core gui

VERSION = 0.1.0

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    src/main.cpp \
    src/CoordinateSystemMainwindow.cpp \
    src/CoordinateSystemSourceData.cpp

HEADERS += \
    src/CoordinateSystemMainwindow.h \
    src/CoordinateSystemSourceData.h

FORMS += \
    src/CoordinateSystemMainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
