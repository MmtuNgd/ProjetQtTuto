#ifndef PRETRE_H
#define PRETRE_H

#include "classemagique.h"

class Pretre : public ClasseMagique
{
public:
    Pretre();
    ~Pretre();

    void Comete(Personnage& personnage);
};

#endif // PRETRE_H
