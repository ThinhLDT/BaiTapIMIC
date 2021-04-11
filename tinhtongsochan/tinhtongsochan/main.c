#include <stdio.h>
#include <stdint.h>
#include <math.h>

int sum;
void main()
{
	for (int i = 0; i < 11; i++)
	{
		if ((i % 2) == 0)
		{
			sum += i;
		}
		
	}
	printf("tong: %d", sum);
}