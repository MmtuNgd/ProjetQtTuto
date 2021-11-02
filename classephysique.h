#ifndef CLASSEPHYSIQUE_H
#define CLASSEPHYSIQUE_H
#include "joueur.h"

class ClassePhysique : public Joueur
{
public:
    ClassePhysique();
    ~ClassePhysique();

    void SetPointsDeSerenite(int pointsSerenite);
    void SetPointsDeSereniteMax(int pointsSereniteMax);

    int GetPointsDeSerenite(void);
    int GetPointsDeSereniteMax(void);

private:
    int m_pointsDeSerenite;
    int m_pointsDeSereniteMax;
};

#endif // CLASSEPHYSIQUE_H
