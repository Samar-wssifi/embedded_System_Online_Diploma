/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	printf("\r\n");
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After swapping value of a = %.2f\n",a);
	printf("After swapping value of b = %.1f\n",b);

}


