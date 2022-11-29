#include <iostream>
using namespace std;
double my_pow(double a, unsigned int b)
{
	int c = a;
	for (int i = 0; i < b; i++)
	{
		c = c * a;
	}
	return c;
}

