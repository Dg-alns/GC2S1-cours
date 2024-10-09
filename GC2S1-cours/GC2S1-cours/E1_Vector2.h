#ifndef VECTOR2_H__
#define VECTOR2_H__

//Faire la classe :
//Vector2
//Elle doit stocker une position x, y dans les floats.
//Elle doit être capable de getter et setter ces positions.

class Vector2 
{
public:
	Vector2(float, float);
	void Set_x(float _nb);
	void Set_y(float _nb);
	float Get_x();
	float Get_y();


private:
	float x;
	float y;
};

#endif // !VECTOR2_H__
