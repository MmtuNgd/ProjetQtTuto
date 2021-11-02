#ifndef SORCIER_H
#define SORCIER_H

#include "classemagique.h"

class Sorcier : public ClasseMagique
{
public:
    Sorcier();
    ~Sorcier();


    void Tempete(Personnage& personnage);
};

#endif // SORCIER_H
