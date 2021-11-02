#include "mainwindow.h"

#include <QApplication>
#include "personnage.h"
#include "arme.h"
#include "joueur.h"
#include "equipe.h"
#include "classemagique.h"
#include "classephysique.h"
#include "guerrier.h"
#include "archer.h"
#include "pretre.h"
#include "sorcier.h"
#include "fenetrecreationperso.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();





    //CreationPerso *FenetreCreationPerso = new CreationPerso();


   // FenetreCreationPerso->show();

    w->show();

    return a.exec();








    return a.exec();
}
