
#include <QApplication>
#include "mainwindow.h"

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
#include "QDebug"

#include "vector"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();


     std::vector<Personnage*> ListePersonnage;
     std::vector<Arme*> ListeArmes;



    auto coco("plop");
    qDebug()<< coco;



    //FenetreCreationPerso *wdw;



    //CreationPerso *FenetreCreationPerso = new CreationPerso();


   // FenetreCreationPerso->show();

    w->show();

    return a.exec();








    return a.exec();
}


//Personnage CreerPersonnage(QStringList *listeInfosPerso)
//{
//    Personnage PersonnageCree;

//    // Remplir avec les info de la qStringlist

//    return PersonnageCree;
//}
