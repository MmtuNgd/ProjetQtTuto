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

class FenetreCreationArme : public QWidget
{
    Q_OBJECT
public:
     FenetreCreationArme(QWidget *parent = nullptr);
    ~FenetreCreationArme();


     QString GetNom(void);
    int GetPoids(void);
public slots:
    void Verification_Champs_arme(void);
    void GetDegats(void);


signals:
    void Validation_Arme(bool valid_arm);

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



};

#endif // FENETRECREATIONARME_H
