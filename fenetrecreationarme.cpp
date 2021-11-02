#include "fenetrecreationarme.h"


#include "QStringList"
#include "QDebug"
#include "QMessageBox"

FenetreCreationArme::FenetreCreationArme(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("Création d'un personnage");
    setFixedSize(300,300);

    m_LayoutGlobale = new QBoxLayout(QBoxLayout::TopToBottom,this);

    // Creation des champs de saisi de la fenetre
    m_NomArme = new QLineEdit;
    m_DegatsArme = new QLineEdit;
    m_PoidsArme = new QLineEdit;

   //Creation de la liste des string des champs
    m_ListStringRecupArme = new QStringList;


    // Creation des bouton de la fenetre
    m_ValidationArme = new QPushButton("Valider cette arme",this);
    m_FermerCreationArme = new QPushButton("Fermer la fenêtre",this);

    // Creation des deux layout : bouton / champs de saisi
    m_ChampsSaisis = new QFormLayout;
    m_LayoutHBoutons = new QHBoxLayout;

    // Mise en forme de la layout des champ de saisi

    m_ChampsSaisis->addRow("Nom de l'arme",m_NomArme);
    m_ChampsSaisis->addRow("Degats de l'arme ",m_DegatsArme);
    m_ChampsSaisis->addRow("Poids de l'arme ",m_PoidsArme);


    // mise en forme de la layout des boutons
    m_LayoutHBoutons->addWidget(m_ValidationArme);
    m_LayoutHBoutons->addWidget(m_FermerCreationArme);

    // mise en forme de la box layout globale
    m_LayoutGlobale->addLayout(m_ChampsSaisis);
    m_LayoutGlobale->addLayout(m_LayoutHBoutons);


    setLayout(m_LayoutGlobale);

    QObject::connect(m_FermerCreationArme,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(m_ValidationArme,SIGNAL(clicked()),this,SLOT(CreerArme()));
}

FenetreCreationArme::~FenetreCreationArme()
{

}

QStringList* FenetreCreationArme::GetArmeCreated(void)
{
    return m_ListStringRecupArme;
}

void FenetreCreationArme::CreerArme(void)
{

    m_ListStringRecupArme->append(m_NomArme->text());
    m_ListStringRecupArme->append(m_DegatsArme->text());
    m_ListStringRecupArme->append(m_PoidsArme->text());

    if (m_NomArme->text().isEmpty() ||  m_DegatsArme->text().isEmpty() || m_PoidsArme->text().isEmpty())
    {
        QMessageBox::warning(this,"Attention","Veuillez vérifier les champs saisis");
    }



}

