
#include "mainwindow.h"
#include "qdebug.h"
#include <vector>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{


    this->setWindowTitle("Fenetre Principale");
    this->setFixedSize(300,300);
    WidgetPrincipal = new QWidget();
    this->setCentralWidget(WidgetPrincipal);

    //Fenetre de creation de perso
     WdwCreationPerso = new FenetreCreationPerso;
     WdwCreationArme = new FenetreCreationArme;

    //Creation des layouts
    LayoutGeneralMain = new QBoxLayout(QBoxLayout::TopToBottom,this);
    LayoutHButtonBas = new QVBoxLayout();


    // Gestion des boutons
    m_BoutonQuitter = new QPushButton("Quitter",this);
    m_BoutonCreerPerso = new QPushButton("Créer un Personnage",this);
    m_BoutonCreerArme = new QPushButton("Créer une Arme",this);
    m_BoutonAfficherArmes = new QPushButton("Afficher les armes",this);
    m_BoutonAfficherPerso = new QPushButton("Afficher les personnages",this);

    //Gestion des layour
    LayoutHButtonBas->addWidget(m_BoutonCreerPerso);
    LayoutHButtonBas->addWidget(m_BoutonCreerArme);
    LayoutHButtonBas->addWidget(m_BoutonAfficherArmes);
    LayoutHButtonBas->addWidget(m_BoutonAfficherPerso);

    LayoutHButtonBas->addWidget(m_BoutonQuitter);


    LayoutGeneralMain->addLayout(LayoutHButtonBas);
    WidgetPrincipal->setLayout(LayoutGeneralMain);

    //Connexion des boutons
    QObject::connect(m_BoutonQuitter,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(m_BoutonCreerPerso,SIGNAL(clicked()),WdwCreationPerso,SLOT(show()));
    QObject::connect(m_BoutonCreerArme,SIGNAL(clicked()),WdwCreationArme,SLOT(show()));

    QObject::connect(m_BoutonAfficherArmes,SIGNAL(clicked()),this,SLOT(AfficherArmes()));
    QObject::connect(m_BoutonAfficherPerso,SIGNAL(clicked()),this,SLOT(AfficherPerso()));

    QObject::connect(WdwCreationArme,SIGNAL(Validation_Arme(bool)),this,SLOT(CreerArme()));




}

MainWindow::~MainWindow()
{
    delete WidgetPrincipal;
    delete WdwCreationArme;
    delete WdwCreationPerso;
}

void MainWindow::CreerArme(void)
{
    Arme arme_creer;

    arme_creer.SetDegatsArme(WdwCreationArme->GetDegats());
    arme_creer.SetNomArme(WdwCreationArme->GetNom().toStdString());
    arme_creer.SetPoidsArme(WdwCreationArme->GetPoids());

    qDebug() << "creer arme stimu";

  //  ListeArme.push_back(arme_creer);

   qDebug() << "arme creee : "<< "Nom/dgts/poids : " <<  QString::fromStdString(arme_creer.GetNomArme())<< " / "<< arme_creer.GetDegats()<< " / "<< arme_creer.GetPoids();
    ListeArme.push_back(arme_creer);
//    degats_arme = m_DegatsArme->text().toInt();
//    poids_arme = m_PoidsArme->text().toInt();

//    arme_creer.SetDegatsArme(degats_arme);
//    arme_creer.SetPoidsArme(poids_arme);
//    arme_creer.SetNomArme(m_NomArme->text().toStdString());

}

void MainWindow::CreerPersonnage()
{

    Personnage personnage_creer;

}

void MainWindow::AfficherArmes()
{
    for (int i=0;i<ListeArme.size();i++)
    {
        qDebug()<<"====== Affichage de l' arme "<< i <<"=======";
        qDebug() <<"Nom de l'arme : "<<  QString::fromStdString(ListeArme[i].GetNomArme());
        qDebug() <<"Degats de l'arme : "<< ListeArme[i].GetDegats();
        qDebug() <<"Poids de l'arme : "<<  ListeArme[i].GetPoids();

    }
}

void MainWindow::AfficherPerso()
{
    qDebug()<<" afficher les personnages";

}
