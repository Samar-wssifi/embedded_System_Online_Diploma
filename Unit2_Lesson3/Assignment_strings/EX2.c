/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
#include "string.h"
void main ()

{
	char s[100];
	int i=0,n=0;
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(s);
	while(s[i]!=0)
	{
		n++;
		i++;
	}
	printf("Length of string is: %d",n);


}









