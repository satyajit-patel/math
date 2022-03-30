#include <stdio.h>
#include <math.h>

float area(int side)
{
	return (side*side*sqrt(3))/4;
}
int main() {
	//find area of equilateral triangle(A = a^2 * sqrt3/4)
	int length;
	scanf("%d", &length);

	float A = area(length);
	printf("Area is %.2f", A);
	return 0;
}