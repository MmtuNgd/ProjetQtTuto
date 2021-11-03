#include "guerrier.h"

#define DGTS_FRAPPE 15
Guerrier::Guerrier()
{
    SetDegats(999);
}

Guerrier::~Guerrier()
{

}

void Guerrier:: FrappeDeMalade(Personnage& personnage)
{
    personnage.RecevoirDegats(DGTS_FRAPPE);
}
