#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QGroupBox>
#include "fenetrecreationperso.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:


public:
    explicit MainWindow(QWidget *parent = nullptr);

    QStringList* RecuperationArmeCreee(void);
    Ui::MainWindow *ui;

    QPushButton *m_BoutonCreerPerso;
    QPushButton *m_BoutonCreerArme;
    QPushButton *m_BoutonQuitter;

    QWidget *WidgetPrincipal;

    QBoxLayout *LayoutGeneralMain;
    QVBoxLayout *LayoutHButtonBas;

};

#endif // MAINWINDOW_H
