QT       += core gui
RC_ICONS = myico.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
VERSION = 9.0.1
QMAKE_TARGET_COPYRIGHT = copyright (c) 2020-2021 lry
QMAKE_TARGET_PRODUCT = garbage classification
QMAKE_TARGET_DESCRIPTION = this program is powered by lry.
RC_LANG= Chinese
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h \
    sourse.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    untitled_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
