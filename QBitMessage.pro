#-------------------------------------------------
#
# Project created by QtCreator 2013-09-01T11:15:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QBitMessage
TEMPLATE = app
INCLUDEPATH += /usr/local/include/botan-1.11

LIBS += -stdlib=libc++
LIBS += -lbotan-1.11

QMAKE_CXXFLAGS += -stdlib=libc++
QMAKE_CXXFLAGS += -std=c++11
QMAKE_CXXFLAGS += -mmacosx-version-min=10.7
QMAKE_LFLAGS += -mmacosx-version-min=10.7

SOURCES +=\
        mainwindow.cpp \
    libbitmessage/unittests.cpp \
    libbitmessage/time.cpp \
    libbitmessage/strings.cpp \
    libbitmessage/random.cpp \
    libbitmessage/protocol.cpp \
    libbitmessage/pow.cpp \
    libbitmessage/hash.cpp \
    libbitmessage/encoding.cpp \
    libbitmessage/elliptic.cpp \
    libbitmessage/bitmessage.cpp \
    libbitmessage/address.cpp \
    main.cpp

HEADERS  += mainwindow.h \
    libbitmessage/unittests.h \
    libbitmessage/time.h \
    libbitmessage/strings.h \
    libbitmessage/random.h \
    libbitmessage/protocol.h \
    libbitmessage/pow.h \
    libbitmessage/hash.h \
    libbitmessage/exceptions.h \
    libbitmessage/encoding.h \
    libbitmessage/elliptic.h \
    libbitmessage/btypes.h \
    libbitmessage/bitmessage.h \
    libbitmessage/address.h \
    libbitmessage/config.h \
    config.h

FORMS    += mainwindow.ui

OTHER_FILES += README.md LICENSE
