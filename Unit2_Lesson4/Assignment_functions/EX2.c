/*
 * main.c
 *
 *  Created on: Jun 9, 2023
 *      Author: Samar
 */
#include "stdio.h"
int Factorial(int n);
int main()
{
	int n;
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("Factorial of %d = %d ",n,Factorial(n));

}

int Factorial(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*Factorial(n-1);

	}

}

