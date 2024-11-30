#include <iostream>
#include "Drib.h"

using namespace std;

Drib::Drib() : ch(0), z(0){}

Drib::Drib(int ch, int z): ch(ch), z(z){}

Drib Drib::operator*(const Drib& d)
{
	Drib temp;
	temp.ch = this->ch * d.ch;
	temp.z = this->z * d.z;
	return temp;
}

Drib Drib::operator/(const Drib& d)
{
	Drib temp;
	temp.ch = this->ch * d.z;
	temp.z = this->z * d.ch;
	return temp;
}

Drib Drib::operator+(const Drib& d)
{
	Drib temp;
	int i = 0;
	bool f = true;
	while (f) {
		i++;
		if (i % this->z == 0 && i % d.z == 0) {
			f = false;
		}
	}
	temp.ch = i / this->z * this->ch + i / d.z * d.ch;
	temp.z = i;
	return temp;
}
Drib Drib::operator-(const Drib& d)
{
	Drib temp;
	int i = 0;
	bool f = true;
	while (f) {
		i++;
		if (i % this->z == 0 && i % d.z == 0) {
			f = false;
		}
	}
	temp.ch = i / this->z * this->ch - i / d.z * d.ch;
	temp.z = i;
	return temp;
}

void Drib::show()
{
	cout << ch << "\n" << "--" << "\n" << z << endl;
}
