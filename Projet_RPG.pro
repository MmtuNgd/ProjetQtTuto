QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    archer.cpp \
    arme.cpp \
    classemagique.cpp \
    classephysique.cpp \
    equipe.cpp \
    fenetrecreationarme.cpp \
    fenetrecreationperso.cpp \
    guerrier.cpp \
    joueur.cpp \
    main.cpp \
    mainwindow.cpp \
    personnage.cpp \
    pretre.cpp \
    sorcier.cpp

HEADERS += \
    archer.h \
    arme.h \
    classemagique.h \
    classephysique.h \
    equipe.h \
    fenetrecreationarme.h \
    fenetrecreationperso.h \
    guerrier.h \
    joueur.h \
    mainwindow.h \
    personnage.h \
    pretre.h \
    sorcier.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
