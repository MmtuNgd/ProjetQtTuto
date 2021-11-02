#include "arme.h"

Arme::Arme()
{
    m_Degats = 1;
    m_NomArme = "Aucune Arme";
    m_poids = 0;
}

Arme::Arme(std::string Nom, int degats, int poids)
{
    m_NomArme = Nom;
    m_Degats = degats;
    m_poids = poids;
}

int Arme::GetDegats(void)
{
    return m_Degats;
}

int Arme::GetPoids(void)
{
    return m_poids;
}

std::string Arme::GetNomArme(void)
{
    return m_NomArme;
}

void Arme::SetDegatsArme(int Degats)
{
    m_Degats = Degats;
}

void Arme::SetPoidsArme(int poids)
{
    m_poids = poids;
}

void Arme::SetNomArme(std::string NomArme)
{
    m_NomArme = NomArme;
}
