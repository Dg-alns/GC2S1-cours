#include <iostream>
#include "Integer.h"

Integer::Integer() : integer(5){

}

Integer::Integer(int _nb) : integer(_nb) {

}

int Integer::Get_nb() {
	return integer;
}

Integer Integer::operator+(Integer& _nb) {
	Integer tmp(this->integer + _nb.integer);
	return tmp;
}

void Integer::operator+=(Integer& _nb) {
	this->integer += _nb.integer;
}

Integer Integer::operator-(Integer& _nb) {
	Integer tmp(this->integer - _nb.integer);
	return tmp;
}

void Integer::operator-=(Integer& _nb) {
	this->integer -= _nb.integer;
}

Integer Integer::operator*(Integer& _nb) {
	Integer tmp(this->integer * _nb.integer);
	return tmp;
}

void Integer::operator*=(Integer& _nb) {
	this->integer *= _nb.integer;
}

Integer Integer::operator/(Integer& _nb) {
	Integer tmp(this->integer / _nb.integer);
	return tmp;
}

void Integer::operator/=(Integer& _nb) {
	this->integer /= _nb.integer;
}

Integer Integer::operator%(Integer& _nb) {
	Integer tmp(this->integer % _nb.integer);
	return tmp;
}

void Integer::operator%=(Integer& _nb) {
	this->integer %= _nb.integer;
}

void Integer::operator<<(Integer& _nb) {
	this->integer << _nb.integer;
}



void Integer::pow(int _exposant) {
	Integer nb(this->integer);
	for (int i(1); i < _exposant; i++) {
		this->operator*=(nb);
	}
}

