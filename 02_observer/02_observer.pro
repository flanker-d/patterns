TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    lentawidget.cpp \
    tvwidget.cpp \
    twitterwidget.cpp \
    isubject.cpp \
    iobserver.cpp \
    newsaggregator.cpp

HEADERS += \
    lentawidget.h \
    tvwidget.h \
    twitterwidget.h \
    isubject.h \
    iobserver.h \
    newsaggregator.h
