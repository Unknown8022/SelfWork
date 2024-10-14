#include <stdio.h>
#include <math.h>

int main()
{
	float a = 7.28, b = 1.89, x = 2.87;

	double z = 4 * atan(b * 1.0 / 1 - x);

	double y = x * tan(z);

	printf("Result %.5f\n", y);

	return 0;
}