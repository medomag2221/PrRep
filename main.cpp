#include <iostream>
using namespace std;
double my_pow(double a, unsigned int b)
{
    if (b<0)
    {
        b = -b;
    }
	int c = a;
	for (int i = 0; i < b; i++)
	{
		c = c * a;
	}
	return c;
}

