/*
 ============================================================================
 Name        : Tp0_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int fact_recur (int n);
int main ()
{
int a;
do{
printf("taper a");
scanf("%d",&a);
}while (a<0);

	printf("%d!=%d",a,fact(a));
    printf("%d!=%d",a,fact_recur(a));
}
int fact (int n){
	int i,res=1;

	for(i=1;i<=n;i++)
		res=res*i;
return res;
}

int fact_recur (int n,int res)
{
if (n==1||n==0)
	return res;
else
	return fact_recur(n-1,res*n);
}


