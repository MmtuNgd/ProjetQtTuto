#ifndef CLASSEMAGIQUE_H
#define CLASSEMAGIQUE_H

#include "joueur.h"

class ClasseMagique : public Joueur
{
public:
    ClasseMagique();
    ~ClasseMagique();

    void SetPointsDeMana(int pointsMana);
    void SetPointsDeManaMax(int pointsManaMax);

    int GetPointsDeMana(void);
    int GetPointsDeManaMax(void);

private:
    int m_mana;
    int m_manaMax;
};

#endif // CLASSEMAGIQUE_H
