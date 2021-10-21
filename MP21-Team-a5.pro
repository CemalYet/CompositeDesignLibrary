QT -= gui

TEMPLATE = lib
DEFINES += MP21TEAMA5_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    action.cpp

HEADERS += \
    MP21-Team-a5_global.h \
    action.h

# Default rules for deployment.
unix {
    target.path = /home/cemal/Desktop/MediaProcessing/Labs/MP21-Team-a5
}
!isEmpty(target.path): INSTALLS += target
