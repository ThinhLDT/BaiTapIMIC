
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdint.h>
float max;
int n = 0;
float m[100];
void main()
{
	printf("nhap so phan tu:");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		printf("\nNhap phan tu a[%d] = ", i);
		scanf("%f", &m[i]);
	}

	//size_t n = NELEMS(m);
	//int sizem = sizeof(m)/sizeof(m[0]);
	for (int i = 0; i < n; i++)
		if (max < m[i]) max = m[i];
	printf("max: %f\n", max);
}