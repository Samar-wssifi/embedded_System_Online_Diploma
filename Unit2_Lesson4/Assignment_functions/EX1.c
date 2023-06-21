/*
 * main.c
 *
 *  Created on: Jun 9, 2023
 *      Author: Samar
 */
#include "stdio.h"
int Prime(int n);
int main()
{
 int a,b,i;
 printf("Enter two numbers(intervals):");
 fflush(stdin); fflush(stdout);
 scanf("%d %d",&a,&b);
 printf("Prime numbers between %d and %d are: ",a,b);
 for(i=a+1; i<b; i++)
 {
	 if(Prime(i)){
		 printf("%d ",i);
	 }
 }
 return 0;
}

int Prime(int n){
	int i,s=1;
	for(i=2; i<=n/2; i++){
		if(n%i==0){
			s=0;
			break;
	}

}
	return s;
}

