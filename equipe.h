#ifndef EQUIPE_H
#define EQUIPE_H

#include <string>

class Equipe
{
public:
    Equipe();

    void SetNomEquipe(std::string Nom);
    std::string GetNomEquipe(void);

private:
    std::string m_NomEquipe;

};

#endif // EQUIPE_H
