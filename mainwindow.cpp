
#include "mainwindow.h"
#include "qdebug.h"
#include <vector>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{


    this->setWindowTitle("Fenetre Principale");
    this->setFixedSize(300,300);
    QWidget *WidgetPrincipal = new QWidget();
    this->setCentralWidget(WidgetPrincipal);

    //Fenetre de creation de perso
    FenetreCreationPerso *WdwCreationPerso = new FenetreCreationPerso();
    FenetreCreationArme *WdwCreationArme = new FenetreCreationArme();

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

    QObject::connect(WdwCreationArme,SIGNAL(Validation_Arme(bool)),this,SLOT(CreerArme()));



}

MainWindow::~MainWindow()
{
    delete WidgetPrincipal;
}

void MainWindow::CreerArme(void)
{
    Arme arme_creer;
    int degat_recup;
WdwCreationArme->GetDegats();
   // arme_creer.SetDegatsArme(degat_recup);
 //   arme_creer.SetNomArme(WdwCreationArme->GetNom().toStdString());
//    arme_creer.SetPoidsArme(WdwCreationArme->GetPoids());


qDebug() << "creer arme stimu";
    //qDebug() << WdwCreationArme->GetDegats();

  //  ListeArme.push_back(arme_creer);

 //   qDebug() << "arme creee : "<< "Nom/dgts/poids : " <<  QString::fromStdString(arme_creer.GetNomArme())<< " / "<< arme_creer.GetDegats()<< " / "<< arme_creer.GetPoids();

//    degats_arme = m_DegatsArme->text().toInt();
//    poids_arme = m_PoidsArme->text().toInt();

//    arme_creer.SetDegatsArme(degats_arme);
//    arme_creer.SetPoidsArme(poids_arme);
//    arme_creer.SetNomArme(m_NomArme->text().toStdString());

}
