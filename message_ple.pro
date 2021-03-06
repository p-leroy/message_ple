#-------------------------------------------------
#
# Project created by QtCreator 2018-01-19T08:20:21
#
#-------------------------------------------------

QT       += widgets

TARGET = message_ple
TEMPLATE = lib

DEFINES += MESSAGE_PLE_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        message.cpp \
    messagedisplay.cpp

HEADERS += \
        message.h \
        message_ple_global.h \  
    messagedisplay.h \
    message_levels.h

FORMS += \
    messagedisplay.ui

#########
# INSTALL
#########

######
######
## WIN
win32{
target.path = ../../lib/bin
header.path = ../../lib/include/common_ple/message_ple
header.files = \
    messagedisplay.h \
    message_levels.h \
    message_ple_global.h
INSTALLS += target header
}

#######
#######
## UNIX
unix{
target.path = $$[QT_INSTALL_LIBS]
isEmpty(target.path) {
    error(can\'t get QT_INSTALL_LIBS)
}

header.path = $$[QT_INSTALL_HEADERS]/common_ple/message_ple/
header.files = \
    messagedisplay.h \
    message_levels.h

INSTALLS += header target
}
