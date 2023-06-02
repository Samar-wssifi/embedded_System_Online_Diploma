/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	int n,i,sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		sum+=i;
	}
	printf("Sum = %d", sum);


}


