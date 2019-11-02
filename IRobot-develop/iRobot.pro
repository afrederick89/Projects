#-------------------------------------------------
#
# Project created by QtCreator 2017-11-03T13:22:45
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IRobot
TEMPLATE = app

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
    main.cpp \
    mainwindow.cpp \
    maintenanceplan.cpp \
    product.cpp \
    basecustomer.cpp \
    customer.cpp \
    prospectivecustomer.cpp \
    transaction.cpp \
    sqlmanager.cpp  \
    datamanager.cpp \
    invalidentry.cpp \
    purchaseorder.cpp \
    admintools.cpp \
    customertools.cpp \
    p_table.cpp \
    addmember.cpp \
    deletemember.cpp \
    customernotfound.cpp \
    invalidaddcustomername.cpp \
    editcustomer.cpp \
    pamphlet.cpp \
    duplicatecustomererrorwindow.cpp


HEADERS += \
    mainwindow.h \
    maintenanceplan.h \
    product.h \
    basecustomer.h \
    customer.h \
    prospectivecustomer.h \
    transaction.h \
    sqlmanager.h  \
    datamanager.h \
    invalidentry.h \
    purchaseorder.h \
    admintools.h \
    customertools.h \
    p_table.h \
    addmember.h \
    deletemember.h \
    customernotfound.h \
    invalidaddcustomername.h \
    editcustomer.h \
    pamphlet.h \
    duplicatecustomererrorwindow.h


FORMS += \
        mainwindow.ui \
    invalidentry.ui \
    purchaseorder.ui \
    admintools.ui \
    customertools.ui \
    addmember.ui \
    deletemember.ui \
    customernotfound.ui \
    invalidaddcustomername.ui \
    editcustomer.ui \
    pamphlet.ui \
    duplicatecustomererrorwindow.ui

# Adds a console on execution
# CONFIG += console

DISTFILES +=
