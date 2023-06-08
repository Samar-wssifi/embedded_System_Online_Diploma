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
	int i,j,n;
	float sum=0;
	printf("Enter the numbers of data: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{

            printf("Enter number: ");
			fflush(stdout); fflush(stdin);
			scanf("%f", &A[i]);
			sum+= A[i];
    }
	printf("Average = %f",sum/n);




}






