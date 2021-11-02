#ifndef FENETRECREATIONPERSO_H
#define FENETRECREATIONPERSO_H

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

class FenetreCreationPerso : public QWidget
{
    Q_OBJECT
private slots:
//    void SendMsg(QString *tab);
    void SendMsg();
    void RemplirListe(void);

public:
    FenetreCreationPerso();
//    FenetreCreationPerso(QLineEdit *NomPerso, QLineEdit *Classe, QLineEdit *Arme, QLineEdit *Equipe, QPushButton *ValidationPerso, QPushButton *FermerCreationPerso, QBoxLayout *LayoutGlobale, QFormLayout *ChampsSaisis, QHBoxLayout *LayoutHBoutons, QStringList *ListStringRecupPerso, const QString &StringNomPerso, const QString &StringClassePerso, const QString &StringArmePerso, const QString &StringEquipePerso);
    ~FenetreCreationPerso();





private:
    QLineEdit *m_NomPerso;
    QLineEdit *m_Classe;
    QLineEdit *m_Arme;
    QLineEdit *m_Equipe;

    QPushButton *m_ValidationPerso;
    QPushButton *m_FermerCreationPerso;

    QBoxLayout *m_LayoutGlobale;

    QFormLayout *m_ChampsSaisis;
    QHBoxLayout *m_LayoutHBoutons;

   QStringList *m_ListStringRecupPerso;

    QString m_StringNomPerso;
    QString m_StringClassePerso;
    QString m_StringArmePerso;
    QString m_StringEquipePerso;
};

#endif // FENETRECREATIONPERSO_H
