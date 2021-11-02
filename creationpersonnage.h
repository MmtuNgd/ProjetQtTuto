#ifndef CREATIONPERSONNAGE_H
#define CREATIONPERSONNAGE_H

#include <QWidget>

namespace Ui {
class CreationPersonnage;
}

class CreationPersonnage : public QWidget
{
    Q_OBJECT

public:
    explicit CreationPersonnage(QWidget *parent = nullptr);
    ~CreationPersonnage();

private:
    Ui::CreationPersonnage *ui;
};

#endif // CREATIONPERSONNAGE_H
