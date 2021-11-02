#ifndef JOUEUR_H
#define JOUEUR_H

#include "personnage.h"

class Joueur : public Personnage
{
public:
    Joueur();
    ~Joueur();
    Arme GetArme(void);
    void SetArme(Arme arme);

private:
    Arme m_monArme;
};

#endif // JOUEUR_H
