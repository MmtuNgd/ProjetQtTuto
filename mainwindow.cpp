#include "mainwindow.h"
#include "qdebug.h"
#include <vector>
#include "personnage.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{


    this->setWindowTitle("Fenetre Principale");
    this->setFixedSize(300,300);
    QWidget *WidgetPrincipal = new QWidget();
    this->setCentralWidget(WidgetPrincipal);

    //Fenetre de creation de perso
    FenetreCreationPerso *WdwCreationPerso = new FenetreCreationPerso(this);
    FenetreCreationArme *WdwCreationArme = new FenetreCreationArme(this);

    //Creation des layouts
    QBoxLayout *LayoutGeneralMain = new QBoxLayout(QBoxLayout::TopToBottom,this);
    QVBoxLayout *LayoutHButtonBas = new QVBoxLayout();


    // Gestion des boutons
    QPushButton *m_BoutonQuitter = new QPushButton("Quitter",this);
    QPushButton *m_BoutonCreerPerso = new QPushButton("Créer un Personnage",this);
    QPushButton *m_BoutonCreerArme = new QPushButton("Créer une Arme",this);

    //Gestion des layour
    LayoutHButtonBas->addWidget(m_BoutonCreerPerso);
    LayoutHButtonBas->addWidget(m_BoutonCreerArme);
    LayoutHButtonBas->addWidget(m_BoutonQuitter);


    LayoutGeneralMain->addLayout(LayoutHButtonBas);
    WidgetPrincipal->setLayout(LayoutGeneralMain);

    //Connexion des boutons
    QObject::connect(m_BoutonQuitter,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(m_BoutonCreerPerso,SIGNAL(clicked()),WdwCreationPerso,SLOT(show()));
    QObject::connect(m_BoutonCreerArme,SIGNAL(clicked()),WdwCreationArme,SLOT(show()));

   // QObject::connect(m_BoutonCreerArme,SIGNAL(clicked()),WdwCreationArme,SLOT(Crer))



    std::vector<Personnage> ListePerso;


}

MainWindow::~MainWindow()
{
    delete WidgetPrincipal;
}

Arme MainWindow::CreerArme(void)
{
    Arme arme_creer;
    std::string nom_arme;
    int degats_arme, poids_arme;



//    degats_arme = m_DegatsArme->text().toInt();
//    poids_arme = m_PoidsArme->text().toInt();

//    arme_creer.SetDegatsArme(degats_arme);
//    arme_creer.SetPoidsArme(poids_arme);
//    arme_creer.SetNomArme(m_NomArme->text().toStdString());
}
