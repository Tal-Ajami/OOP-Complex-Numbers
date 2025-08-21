#include "Complex.h"
#include <math.h>
#define M_PI 3.14159265358979323846

double Complex::getRadius() const {
	return sqrt(pow(this->_x, 2) + pow(this->_y, 2));
	 
}

double  Complex::getAngle() const {
	double angle = atan2(this->_y, this->_x);
	return angle * (180.0 / M_PI);;
}
void Complex::print() const {
	cout << this->_x;
	if (this->_y > 0)
		{cout << "+" << this->_y << "i"; }
	else if (this->_y < 0)
		{cout << "-" << -(this->_y) << "i"; }
	cout << " (" << this->getRadius() << "," << this-> getAngle() << ")" << endl;
}

Complex Complex::addNums(const Complex& n) const {
	return Complex(this->_x + n._x, this->_y + n._y);
	 
} 

Complex Complex::subNums(const Complex& n) const {
	return Complex(this->_x - n._x, this->_y - n._y);
}
