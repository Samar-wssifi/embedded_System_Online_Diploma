/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	float a;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	if(a>0)
	{
		printf("%.2f is positive.", a);
	}
	else if(a<0)
	{
		printf("%.2f is negative.", a);
	}
	else
	{
		printf("You entered a zero.");
	}



}


