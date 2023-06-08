/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"

void main ()

{
	float A[100][100];
	float T[100][100];
	int i,j,n,p;
	printf("Enter rows and column of matrix: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);
	scanf("%d", &p);
	printf("Enter elements of matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &A[i][j]);

		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
		{
			T[i][j]=A[j][i];

		}
	}
	printf("Entered matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%f\t",A[i][j]);

		}
		printf("\n");
	}
	printf("Transpose of matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%f\t",T[i][j]);

		}
		printf("\n");
	}



}









