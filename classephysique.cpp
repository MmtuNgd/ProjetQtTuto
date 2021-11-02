#include "classephysique.h"

ClassePhysique::ClassePhysique()
{

}

ClassePhysique::~ClassePhysique()
{

}

int ClassePhysique::GetPointsDeSerenite()
{
    return m_pointsDeSerenite;
}

int ClassePhysique::GetPointsDeSereniteMax()
{
    return m_pointsDeSereniteMax;
}

void ClassePhysique::SetPointsDeSerenite(int pointsSerenite)
{
    m_pointsDeSerenite = pointsSerenite;
}

void ClassePhysique::SetPointsDeSereniteMax(int pointsSereniteMax)
{
    m_pointsDeSereniteMax = pointsSereniteMax;
}
