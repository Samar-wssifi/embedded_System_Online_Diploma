/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	int a;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("%d is even.",a);
	}
	else
	{
		printf("%d is odd.",a);
	}

}


