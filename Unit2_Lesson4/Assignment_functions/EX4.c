/*
 * main.c
 *
 *  Created on: Jun 9, 2023
 *      Author: Samar
 */
#include <stdio.h>
int Power(int n, int p);
int main() {
	int n,p;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("Enter power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&p);
	printf("%d^%d = %d",n,p,Power(n,p));
	return 0;
}
int Power(int n, int p) {
	int s;
	if(p==1){
		s=n;
	}
	else{
		s=n*Power(n,(p-1));
	}
	return s;


}



