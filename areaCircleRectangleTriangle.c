#include <stdio.h>
#include <math.h>

float areaOfCircle(int r)
{
	return (3.14 * r * r);
}
int areaOfRectangle(int l, int b)
{
	return (l * b);
}
float areaOfTriangle(int b, int h)
{
	return ((b * h)/2);
}
int main() {
	//find area of circle(pi*r^2), rectangle(length*breadth), triangle((base*height)/2)
	int radius;
	scanf("%d", &radius);
	float A1 = areaOfCircle(radius);

	int length, breadth;
	scanf("%d%d", &length, &breadth);
	int A2 = areaOfRectangle(length, breadth);

	int base, height;
	scanf("%d%d", &base, &height);
	float A3 = areaOfTriangle(base, height);

	printf("areaOfCircle with radius %d is = %.2f\n", radius, A1);
	printf("areaOfRectangle with length %d and breadth %d is = %d\n", length, breadth, A2);
	printf("areaOfTriangle with base %d and height %d is = %.2f", base, height, A3);
	return 0;
}