#include "guerrier.h"

#define DGTS_FRAPPE 15
Guerrier::Guerrier()
{

}

Guerrier::~Guerrier()
{

}

void Guerrier:: FrappeDeMalade(Personnage& personnage)
{
    personnage.RecevoirDegats(DGTS_FRAPPE);
}
