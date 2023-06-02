/*
 * main.c
 *
 *  Created on: May 25, 2023
 *      Author: Samar
 */


#include "stdio.h"

void main ()
{
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f", &x);
	scanf("%f", &y);
	printf("Product: %f", x*y);

}
