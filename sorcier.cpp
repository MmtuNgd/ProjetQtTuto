#include "sorcier.h"

#define DGTS_TEMPETE 20
Sorcier::Sorcier()
{

}

Sorcier::~Sorcier()
{

}

void Sorcier::Tempete(Personnage &personnage)
{
    personnage.RecevoirDegats(DGTS_TEMPETE);
}
