#ifndef INTEGER_H__
#define INTEGER_H__

class Integer
{
	int integer;
public:
	Integer();
	Integer(int);

	int Get_nb();

	Integer operator+(Integer& _nb);
	void operator+=(Integer& _nb);

	Integer operator-(Integer& _nb);
	void operator-=(Integer& _nb);

	Integer operator*(Integer& _nb);
	void operator*=(Integer& _nb);

	Integer operator/(Integer& _nb);
	void operator/=(Integer& _nb);

	Integer operator%(Integer& _nb);
	void operator%=(Integer& _nb);

	void operator<<(Integer & _nb);


	void pow(int _exposant);
};


#endif // !INTEGER_H__

