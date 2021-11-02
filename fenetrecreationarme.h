#ifndef FENETRECREATIONARME_H
#define FENETRECREATIONARME_H

#include <QWidget>
#include "QWidget"
#include "mainwindow.h"
#include "QProgressBar"
#include "QPushButton"
#include "QLineEdit"
#include "QFormLayout"
#include "QLayout"
#include "QString"
#include "QObject"
#include "QWidget"

class FenetreCreationArme : public QWidget
{
    Q_OBJECT
public:
    explicit FenetreCreationArme(QWidget *parent = nullptr);
    ~FenetreCreationArme();

    QStringList* GetArmeCreated(void);
public slots:
     void CreerArme(void);


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
