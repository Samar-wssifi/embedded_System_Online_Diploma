/*
 * main.c
 *
 *  Created on: May 25, 2023
 *      Author: Samar
 */


#include "stdio.h"

void main ()
{
	int a,b;
	printf("Enter two integers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Sum: %d", a+b);

}
