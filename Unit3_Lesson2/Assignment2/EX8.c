/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	int i;
	float a,b;
	char c;
	printf("Enter Operator either + or - or * or divide: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	scanf("%f", &b);
	i=(int)c;
	switch(i)
	{
	case 43:
	{
		printf("%.1f + %.1f = %.1f",a,b,a+b);
		break;
	}
	case 45:
	{
		printf("%.1f - %.1f = %.1f",a,b,a-b);
		break;
	}
	case 42:
	{
		printf("%.1f * %.1f = %.1f",a,b,a*b);
		break;
	}
	case 47:
	{
		printf("%.1f / %.1f = %.1f",a,b,a/b);
		break;
	}

	}
}






