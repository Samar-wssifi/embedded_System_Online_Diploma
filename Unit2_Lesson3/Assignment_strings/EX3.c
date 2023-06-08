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
	char rev[100];
	int i,n=0, j=0;
	printf("Enter a string:");
	fflush(stdout); fflush(stdin);
	gets(s);
    n=strlen(s);
    for(i=n-1; i>=0&&j<n; i--)
    {
    	rev[j]=s[i];
    	j++;
    }
    rev[n]=0;
	printf("Reverse of string is: %s",rev);


}









