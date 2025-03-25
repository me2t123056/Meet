//given number is +,-,0 check by using ternary(conditional) opretor

#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	
	(a>0)?printf("positive"):
	(a<0)?printf("nagative"):printf("zero");	
	
	return 0;
}
