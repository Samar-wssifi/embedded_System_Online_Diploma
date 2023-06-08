/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"

void main ()

{
	float A[100];
	float e;
	int i,n;
	printf("Enter number of elements: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%f", &A[i]);

	}

	printf("Enter the element to be searched: ");
	fflush(stdout); fflush(stdin);
	scanf("%f", &e);

	for(i=0;i<n;i++)
	{
		if(A[i]==e)
		{
			printf("Number found at location: %d",i);
			break;
		}


	}
	if(i==n)
	{
		printf("Number not found");

	}







}









