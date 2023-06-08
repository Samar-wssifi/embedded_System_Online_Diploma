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
	float B[100];
	float e;
	int i,n,l;
	printf("Enter number of elements: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%f", &A[i]);

	}

	printf("Enter the element to be inserted: ");
	fflush(stdout); fflush(stdin);
	scanf("%f", &e);
	printf("Enter the location: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &l);
	B[0]=l==0?e:A[0];
	for(i=1;i<=n;i++)
	{
		if(i<l)
		{
			B[i]=A[i];
		}
		else if(i==l)
		{
			B[i]=e;
		}
		else
		{
			B[i]=A[i-1];
		}

	}
	for(i=0;i<=n;i++)
	{
		printf("%f\t",B[i]);
	}





}









