#include "archer.h"
#define DGTS_TIR 10
Archer::Archer()
{

}

Archer::~Archer()
{

}

void Archer::TirPuissant(Personnage &personnage)
{
    personnage.RecevoirDegats(DGTS_TIR);
}
