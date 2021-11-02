
#include <iostream>

#include "fenetrecreationperso.h"
#include "QMessageBox"
#include "QIcon"
#include <QtDebug>
using namespace std;

FenetreCreationPerso::FenetreCreationPerso()
 {

    this->setWindowTitle("Création d'un personnage");
    setFixedSize(300,300);

    m_LayoutGlobale = new QBoxLayout(QBoxLayout::TopToBottom,this);

    // Creation des champs de saisi de la fenetre
    m_NomPerso = new QLineEdit;
    m_Arme = new QLineEdit;
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
    m_ChampsSaisis->addRow("Nom de l'arme",m_Arme);


    // mise en forme de la layout des boutons
    m_LayoutHBoutons->addWidget(m_ValidationPerso);
    m_LayoutHBoutons->addWidget(m_FermerCreationPerso);

    // mise en forme de la box layout globale
    m_LayoutGlobale->addLayout(m_ChampsSaisis);
    m_LayoutGlobale->addLayout(m_LayoutHBoutons);


    setLayout(m_LayoutGlobale);

    QObject::connect(m_FermerCreationPerso,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(m_ValidationPerso,SIGNAL(clicked()),this,SLOT(RemplirListe()));



}

FenetreCreationPerso::~FenetreCreationPerso()
{

}

//void FenetreCreationPerso::SendMsg(QString &tab)
void FenetreCreationPerso::SendMsg(void)

{
    //tab[0] = m_NomPerso->text();
    qDebug() << m_NomPerso->text() ;
}

void FenetreCreationPerso::RemplirListe()
{


    m_StringArmePerso = m_Arme->text();
    m_StringClassePerso = m_Classe->text();
    m_StringEquipePerso = m_Equipe->text();
    m_StringNomPerso = m_NomPerso->text();

    if ((m_StringArmePerso.isEmpty())  || (m_StringClassePerso.isEmpty()) || (m_StringEquipePerso.isEmpty()) || (m_StringNomPerso.isEmpty()) )
    {

        QMessageBox::warning(this,"Attention","Veuillez vérifier les champs saisis");
    }
    else
    {
    m_ListStringRecupPerso->append(m_NomPerso->text());
    m_ListStringRecupPerso->append(m_Classe->text());
    m_ListStringRecupPerso->append(m_Equipe->text());
    m_ListStringRecupPerso->append(m_Arme->text());


        qDebug() << *m_ListStringRecupPerso;
        m_ListStringRecupPerso->clear();

        m_NomPerso->clear();
        m_Classe->clear();
        m_Equipe->clear();
        m_Arme->clear();
    }




}
