#include<stdio.h>
#include<conio.h>

int main()
{
	int a,i;
	
	printf("enter any number:");
	scanf("%d",&a);
	
	for(i=0;i<=a;i=i+1)
	{
		if (i==a)
		{
			if (a%2==0)
			{
				printf("%d is  even",a);
			}
			else
			{
				printf("%d is odd",a);
			}		
		}
	}
return 0;
}
