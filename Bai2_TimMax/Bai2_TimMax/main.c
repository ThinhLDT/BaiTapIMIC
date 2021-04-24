#define _CRT_SECURE_NO_WARNINGS
//#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))
#include<stdio.h>
#include<stdint.h>
float a, b, c, max = 0;

void main()
{
	printf("nhap a:");
	scanf("%f", &a);
	printf("nhap b:");
	scanf("%f", &b);
	printf("nhap c:");
	scanf("%f", &c);
	float m[] = { a,b,c };
	//size_t n = NELEMS(m);
	int sizem = sizeof(m) / sizeof(m[0]);
	for (int i = 0; i < sizem; i++)
	{
		if (max < m[i]) max = m[i];
	}

	printf("max: %f\n", max);
}