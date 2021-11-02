#ifndef GUERRIER_H
#define GUERRIER_H

#include "classephysique.h"

class Guerrier : public ClassePhysique
{
public:
    Guerrier();
    ~Guerrier();

    void FrappeDeMalade(Personnage& personnage);
};

#endif // GUERRIER_H
