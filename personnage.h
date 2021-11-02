#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <string>
#include "equipe.h"
#include "arme.h"
class Personnage
{
public:
    Personnage();
    ~Personnage();
    // Getter
    int GetVie(void);
    int GetVieMax(void);
    int GetVitesse(void);
    int GetDegats(void);
    Equipe GetEquipe(void);
    std::string GetNomPersonnage(void);
    // Setter
    void SetVie(int NbVie);
    void SetVieMax(int NbVieMax);
    void SetVitesse(int Vitesse);
    void SetDegats(int Degats);
    void SetEquipe(Equipe equipe);
    void SetNomPersonnage(std::string NomPerso);
    void RecevoirDegats(int NbDegats);
    void Attaquer (Personnage &cible);
    bool EstVivant();
private:
    int m_vie;
    int m_vie_Max;
    int m_vitesse;
    int m_degats;
    Equipe m_equipe;
    std::string m_nomPerso;
};
#endif // PERSONNAGE_H
