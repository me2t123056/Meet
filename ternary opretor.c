//find the odd & even by terminal operator
#include<stdio.h>
#include<conio.h>

//methode 2
/*
int main()
{
	int a;
	
	printf("enter eny num:");
	scanf("%d",&a);
	
	int b=a%2==0;
	
	b=0?printf("%d num is even",b):printf("%d num is odd",b);
	
	getch();
	return 0;
} 
*/

//methode1

 
int main()
{ 
	int a;
	
	printf("enter eny num:");
	scanf("%d",&a);
	
	a%2==0 ? printf("%d is even ",a):printf("%d is odd",a);
	
	getch();
	return 0;
}





