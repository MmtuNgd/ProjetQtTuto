#include "classemagique.h"

ClasseMagique::ClasseMagique()
{

}
ClasseMagique::~ClasseMagique()
{

}

int ClasseMagique::GetPointsDeMana()
{
    return m_mana;
}

int ClasseMagique::GetPointsDeManaMax()
{
    return m_manaMax;
}

void ClasseMagique::SetPointsDeMana(int pointsMana)
{
    m_mana = pointsMana;
}

void ClasseMagique::SetPointsDeManaMax(int pointsManaMax)
{
    m_manaMax = pointsManaMax;
}
