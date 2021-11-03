
#include <iostream>

#include "fenetrecreationperso.h"
#include "QMessageBox"
#include "QIcon"
#include <QtDebug>
using namespace std;

FenetreCreationPerso::FenetreCreationPerso(QWidget *parent) : QWidget(parent)
 {

    this->setWindowTitle("Création d'un personnage");
    setFixedSize(300,300);


    m_LayoutGlobale = new QBoxLayout(QBoxLayout::TopToBottom,this);

    // Creation des champs de saisi de la fenetre
    m_NomPerso = new QLineEdit;
    m_Classe = new QLineEdit;
    m_Equipe = new QLineEdit;

   //Creation de la liste des string des champs
    m_ListStringRecupPerso = new QStringList;


    // Creation des bouton de la fenetre
    m_ValidationPerso = new QPushButton("Valider le Personnage",this);
    m_FermerCreationPerso = new QPushButton("Fermer la fenêtre",this);

    // Creation des deux layout : bouton / champs de saisi
    m_ChampsSaisis = new QFormLayout;
    m_LayoutHBoutons = new QHBoxLayout;

    // Mise en forme de la layout des champ de saisi

    m_ChampsSaisis->addRow("Nom du Personnage",m_NomPerso);
    m_ChampsSaisis->addRow("Nom de la classe",m_Classe);
    m_ChampsSaisis->addRow("Nom de l'equipe",m_Equipe);


    // mise en forme de la layout des boutons
    m_LayoutHBoutons->addWidget(m_ValidationPerso);
    m_LayoutHBoutons->addWidget(m_FermerCreationPerso);

    // mise en forme de la box layout globale
    m_LayoutGlobale->addLayout(m_ChampsSaisis);
    m_LayoutGlobale->addLayout(m_LayoutHBoutons);


    setLayout(m_LayoutGlobale);

    QObject::connect(m_FermerCreationPerso,SIGNAL(clicked()),this,SLOT(close()));
//    QObject::connect(m_ValidationPerso,SIGNAL(clicked()),this,SLOT(RemplirListe()));
    QObject::connect(m_ValidationPerso,SIGNAL(clicked()),this,SLOT(Verification_Champs_perso()));



}

FenetreCreationPerso::~FenetreCreationPerso()
{

}

void FenetreCreationPerso::Verification_Champs_perso()
{

    if (m_NomPerso->text().isEmpty() ||  m_Classe->text().isEmpty() || m_Equipe->text().isEmpty())
    {
        QMessageBox::warning(this,"Attention","Veuillez vérifier les champs saisis de creation du personnage");
    }
}



