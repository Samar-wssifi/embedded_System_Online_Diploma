/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	int n,i,factorial=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	if(n==0)
	{
		printf("factorial of zero is 1.");
	}
	else if(n<0)
	{
		printf("Error!! Factorial of negative number doestn't exist.");
	}
	else
	{
		for(i=1; i<=n; i++)
		{
			factorial*=i;
		}
		printf("Factorial = %d", factorial);
	}


}


