QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    details.cpp \
    execution_dialog.cpp \
    information.cpp \
    main.cpp \
    mainwindow.cpp \
    p_template_exe.cpp \
    process_template.cpp

HEADERS += \
    ProcessClass.h \
    details.h \
    execution_dialog.h \
    information.h \
    mainwindow.h \
    p_template_exe.h \
    process_template.h

FORMS += \
    details.ui \
    execution_dialog.ui \
    information.ui \
    mainwindow.ui \
    p_template_exe.ui \
    process_template.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
