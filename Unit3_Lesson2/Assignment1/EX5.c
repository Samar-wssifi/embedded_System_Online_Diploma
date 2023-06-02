/*
 * main.c
 *
 *  Created on: Jun 1, 2023
 *      Author: Samar
 */
#include "stdio.h"
void main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	printf("ASCII value of %c = %d",c,c);
}


