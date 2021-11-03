#ifndef FENETRECREATIONPERSO_H
#define FENETRECREATIONPERSO_H

#include <QWidget>
#include "mainwindow.h"

#include "QPushButton"
#include "QLineEdit"
#include "QFormLayout"
#include "QLayout"
#include "QString"
#include "QWidget"
#include "personnage.h"
class FenetreCreationPerso : public QWidget
{
    Q_OBJECT
public:
    explicit FenetreCreationPerso(QWidget *parent = nullptr);
    ~FenetreCreationPerso();

private slots:
//    void SendMsg(QString *tab);
    void SendMsg();
    void RemplirListe(void);







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
