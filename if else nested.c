#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	
	if(a>=0)
	{
		if(a==0)
		{
			printf("given num is zero");
		}
		else
		{
			printf("given num is positive");	
		}
	
	}
	else
		printf("given num is negative");
		
		return 0;	
}
