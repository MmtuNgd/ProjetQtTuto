#ifndef ARME_H
#define ARME_H

#include <string>

class Arme
{
public:
    Arme();
    Arme(std::string Nom, int degats, int poids);


    void SetNomArme(std::string NomArme);
    void SetPoidsArme(int poids);
    void SetDegatsArme(int Degats);
    std::string GetNomArme(void);
    int GetDegats(void);
    int GetPoids(void);

private:
    std::string m_NomArme;
    int m_Degats;
    int m_poids;

};

#endif // ARME_H
