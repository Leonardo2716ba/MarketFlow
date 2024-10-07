QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Listar automaticamente todos os arquivos .cpp
SOURCES += $$files($$PWD/src/*.cpp, true) \
    src/loginwindow.cpp

# Listar automaticamente todos os arquivos .h
HEADERS += $$files($$PWD/src/*.h, true) \
    src/loginwindow.h

# Listar automaticamente todos os arquivos .ui
FORMS += $$files($$PWD/src/*.ui, true)

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
