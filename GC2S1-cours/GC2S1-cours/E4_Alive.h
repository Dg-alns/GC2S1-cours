#ifndef ALIVE_H__
#define ALIVE_H__

//Faire la classe :
//Alive
//Elle doit stocker dans un float le maximum de vie.
//Elle doit stocker dans un float la vie actuel.
//Elle doit avoir un constructeur pour set la vie.
//Elle doit avoir des fonctions membres public virtuel pour :
//-R�cup�rer le maximum de vie.
//- R�cup�rer la vie actuel.
//- Recevoir des d�g�ts / perdre de la vie.

class Alive
{
protected:
	float max_vie;
	float vie;
public:
	Alive(float);
	virtual float Get_Max_Vie();
	virtual float Get_Vie();
	virtual void Take_Damadge(float);

};

#endif // !ALIVE_H__

