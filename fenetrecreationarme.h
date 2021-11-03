#ifndef FENETRECREATIONARME_H
#define FENETRECREATIONARME_H

#include <QWidget>
#include "QPushButton"
#include "QLineEdit"
#include "QFormLayout"
#include "QLayout"
#include "QString"
#include "QObject"
#include "QWidget"
#include "arme.h"

class FenetreCreationArme : public QWidget
{
    Q_OBJECT
public:
     FenetreCreationArme(QWidget *parent = nullptr);
    ~FenetreCreationArme();

    QString GetNom(void);
    int GetDegats(void);
    int GetPoids(void);
    QStringList* GetArmeCreated(void);
public slots:
     Arme CreerArme(void);


private:
    QLineEdit *m_NomArme;
    QLineEdit *m_DegatsArme;
    QLineEdit *m_PoidsArme;


    QPushButton *m_ValidationArme;
    QPushButton *m_FermerCreationArme;

    QBoxLayout *m_LayoutGlobale;

    QFormLayout *m_ChampsSaisis;
    QHBoxLayout *m_LayoutHBoutons;

   QStringList *m_ListStringRecupArme;

    QString m_StringNomArme;
    QString m_StringDegatsArme;
    QString m_StringPoidsArme;

};

#endif // FENETRECREATIONARME_H
