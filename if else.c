// find odd or even by if else
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	
	printf("enter eny number:");
	scanf("%d",&a);
	
	if(a%2==0)
	{	
		printf("%d is even",a);		
	}
	else
	{
		printf("%d is odd",a);
	} 
	
getch();
return 0;
}
