#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdint.h>
#include<string.h>
uint8_t n;
typedef struct
{
	char	ten[32];
	float	diem_van;
	float	diem_toan;
} HocSinh_t;

void main()
{
	HocSinh_t lopA1[15];
	float diem_tb[15];
	float max = 0;
	char tenhs[32];
	int vitri;
	printf("Cho biet so Sinh vien: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Thong tin Sinh vien thu %d la: \n", i);
		printf("Ten: \n");	
		getchar();
		gets(lopA1[i].ten);
		
		
		printf("Diem Toan: \n");
		scanf("%f", &lopA1[i].diem_toan);
		printf("Diem Van: \n");
		scanf("%f", &lopA1[i].diem_van);
		diem_tb[i] = (lopA1[i].diem_toan + lopA1[i].diem_van) / 2;	
	}
	
	for (int i = 0; i < n; i++)
	{
		if (max < diem_tb[i])
		{
			max = diem_tb[i];
			vitri = i;
		}
	}
	printf("hoc sinh %s dat diem trung binh cao nhat: %0.2f", lopA1[vitri].ten , max);
}