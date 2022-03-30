#include <stdio.h>
#include <math.h>

void area(float *p)
{
	int side = *p;
	*p = (*p) * (*p) * sqrt(3)/4;
}
int main() {
	//find area of equilateral triangle(A = side^2 * sqrt(3)/4)
	float length;
	scanf("%f", &length);

	area(&length);
	printf("\nArea is %.2f", length);
	return 0;
}