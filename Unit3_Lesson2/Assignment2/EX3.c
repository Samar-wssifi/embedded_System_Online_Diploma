/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Largest number = %.2f",a);
		}
		else
		{
			printf("Largest number = %.2f",a);

		}
	}
	if(b>a)
	{
		if(b>c)
		{
			printf("Largest number = %.2f",b);
		}
		else
		{
			printf("Largest number = %.2f",c);

		}
	}


}


