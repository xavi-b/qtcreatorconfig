QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = %{ProjectName}
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    %{ProjectName}.cpp \

HEADERS  += MainWindow.h \
    %{ProjectName}.h \

RESOURCES += \
    resources.qrc
