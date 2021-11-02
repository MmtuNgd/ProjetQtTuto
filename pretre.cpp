#include "pretre.h"

#define DGTS_COMETE 20

Pretre::Pretre()
{

}

Pretre::~Pretre()
{

}

void Pretre::Comete(Personnage &personnage)
{
    personnage.RecevoirDegats(DGTS_COMETE);
}
