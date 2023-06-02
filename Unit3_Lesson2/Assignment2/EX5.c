/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	int a;
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	a=(int)c;
	if((a>=97 && a<=122) || (a>=65 && a<=90))
	{
		printf("%c is an alphabet.",c);
	}
	else
	{
		printf("%c is not an alphabet.",c);
	}



}


