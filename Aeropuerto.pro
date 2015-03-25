#-------------------------------------------------
#
# Project created by QtCreator 2015-03-21T17:11:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Aeropuerto
TEMPLATE = app


SOURCES += main.cpp\
        aeropuerto.cpp \
    vuelo.cpp \
    boleto.cpp \
    airbusa380.cpp \
    boeing747.cpp \
    avion.cpp \
    crearvuelo.cpp \
    crearavion.cpp \
    modificarvuelo.cpp \
    modificaravion.cpp \
    eliminarvuelo.cpp \
    eliminaravion.cpp \
    horas.cpp

HEADERS  += aeropuerto.h \
    vuelo.h \
    boleto.h \
    airbusa380.h \
    boeing747.h \
    avion.h \
    crearvuelo.h \
    crearavion.h \
    modificarvuelo.h \
    modificaravion.h \
    eliminarvuelo.h \
    eliminaravion.h \
    horas.h

FORMS    += aeropuerto.ui \
    crearvuelo.ui \
    crearavion.ui \
    modificarvuelo.ui \
    modificaravion.ui \
    eliminarvuelo.ui \
    eliminaravion.ui \
    horas.ui
