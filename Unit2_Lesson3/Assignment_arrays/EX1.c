/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"

void main ()

{
	float A[2][2];
	float B[2][2];
	float S[2][2];
	int i,j;
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &A[i][j]);

		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &B[i][j]);
			S[i][j]=A[i][j]+B[i][j];

		}
	}
	printf("Sum Of Matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f\t",S[i][j]);

		}
		printf("\n");
	}



}






