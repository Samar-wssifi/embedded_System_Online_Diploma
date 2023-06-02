/*
 * main.c
 *
 *  Created on: May 25, 2023
 *      Author: Samar
 */


#include "stdio.h"

void main ()
{
	int a;
	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &a);
	printf("You entered: %d", a);

}
