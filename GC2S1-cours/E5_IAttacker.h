#ifndef IATTACKER_H__
#define IATTACKER_H__

//Faire l’interface :
//Pour rappel :
//Une interface est une classe qui contient que des fonctions membres virtuel pur.
//IAttacker
//Elle doit avoir la fonctions membres virtuel public pur pour attaquer un pointeur de Alive.

#include "E4_Alive.h"

class IAttacker
{
public:
	virtual void Attack(Alive* cible) = 0;
};

#endif // !IATTACKER_H__
