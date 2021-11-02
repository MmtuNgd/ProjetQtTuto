#ifndef ARCHER_H
#define ARCHER_H

#include "classephysique.h"

class Archer : public ClassePhysique
{
public:
    Archer();
    ~Archer();

    void TirPuissant(Personnage& personnage);
};

#endif // ARCHER_H
