#include "equipe.h"

Equipe::Equipe()
{

}

void Equipe::SetNomEquipe(std::string Nom)
{
    m_NomEquipe = Nom;
}

std::string Equipe::GetNomEquipe(void)
{
    return m_NomEquipe;
}
