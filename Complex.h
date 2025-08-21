#pragma once
#include <iostream>
using namespace std;
class Complex
{
private:
	int _x;
	int _y;
	void setx(int x_value) { this->_x = x_value; }
	void sety(int y_value) { this->_y = y_value; }

public:
	Complex(int x, int y) { this->setx(x); this->sety(y); }
	Complex(int x = 0) { this->setx(x); this->sety(0); }
	int getx() const { return this->_x; }
	int gety() const { return this->_y; }

	void setNum(int  x, int y) {this->setx(x); this->sety(y);}

	double getRadius() const;
	double getAngle() const;
	void print() const;
	Complex addNums(const Complex& n) const;
	Complex subNums(const Complex& n) const;
	

};


