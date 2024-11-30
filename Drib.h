#pragma once
class Drib {
	int ch;
	int z;
public:
	Drib();
	Drib(int ch, int z);
	Drib operator*(const Drib& d);
	Drib operator/(const Drib& d);
	Drib operator+(const Drib& d);
	Drib operator-(const Drib& d);
	void show();
};