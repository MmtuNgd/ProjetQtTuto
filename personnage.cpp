#include "personnage.h"
#include <string>
Personnage::Personnage()
{

}

Personnage::~Personnage()
{

}

void Personnage::RecevoirDegats(int NbDegats)
{
    m_vie -= NbDegats;
    if (m_vie <= 0)
    {
        m_vie = 0;
    }

}

bool Personnage::EstVivant(void)
{
    if(m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Personnage::GetVie(void)
{
    return m_vie;
}
int Personnage::GetVieMax(void)
{
    return m_vie_Max;
}
int Personnage::GetVitesse(void)
{
    return m_vitesse;
}
int Personnage::GetDegats(void)
{
    return m_degats;
}
std::string Personnage::GetNomPersonnage(void)
{
    return m_nomPerso;
}

Equipe Personnage::GetEquipe(void)
{
    return m_equipe;
}
void Personnage::SetVie(int NbVie)
{
    m_vie = NbVie;
}
void Personnage::SetVieMax(int NbVieMax)
{
    m_vie_Max = NbVieMax;
}
void Personnage::SetVitesse(int Vitesse)
{
    m_vitesse = Vitesse;
}
void Personnage::SetDegats(int Degats)
{
    m_degats = Degats;
}
void Personnage::SetNomPersonnage(std::string NomPerso)
{
    m_nomPerso = NomPerso;
}

void Personnage::SetEquipe(Equipe equipe)
{
    m_equipe = equipe;
}
