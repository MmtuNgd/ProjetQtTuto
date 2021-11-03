#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QGroupBox>

#include "arme.h"
#include "personnage.h"
#include "fenetrecreationperso.h"
#include "fenetrecreationarme.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void CreerArme(void);


public:
     explicit MainWindow(QWidget *parent = nullptr);
     ~MainWindow();
//    void CreerArme(void);

    //QStringList* RecuperationArmeCreee(void);
    QWidget *WidgetPrincipal;



    QPushButton *m_BoutonCreerPerso;
    QPushButton *m_BoutonCreerArme;
    QPushButton *m_BoutonQuitter;



    // Gestion des layout
    QBoxLayout *LayoutGeneralMain;
    QVBoxLayout *LayoutHButtonBas;

private:
    Ui::MainWindow *ui;
    // gestion des sous fenetre *** pb*
    FenetreCreationArme *WdwCreationArme;
    FenetreCreationPerso *WdwCreationPerso;
    std::vector<Arme> ListeArme;



};

#endif // MAINWINDOW_H
