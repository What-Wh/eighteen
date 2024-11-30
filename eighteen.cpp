#include <iostream>
#include "Drib.h"

using namespace std;

int main()
{
	Drib d1(3, 2);
	Drib d2(2, 4);
	Drib d3 = d1 * d2;
	d3.show();
	d3 = d1 / d2;
	d3.show();
	d3 = d1 + d2;
	d3.show();
	d3 = d1 - d2;
	d3.show();
}