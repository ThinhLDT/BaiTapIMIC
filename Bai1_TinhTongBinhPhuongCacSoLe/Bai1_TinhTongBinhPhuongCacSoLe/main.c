#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdint.h>

int n = 0;
int S = 0;
void main()
{
	printf("nhap n: ");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			S = S + i * i;
		}
	}
	printf("Tong binh phuong cac so le trong day: %d", S);
}