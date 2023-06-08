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
	char c;
	int i,n,p=0;
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(s);
	printf("Enter a character to find frequency:");
	fflush(stdout); fflush(stdin);
	scanf("%c", &c);
	n=strlen(s);
	for(i=0; i<n; i++)
	{
		if(s[i]==c)
		{
			p++;
		}
	}
	printf("Frequency of %c is: %d",c,p);


}









