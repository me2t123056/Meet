//given number is +,-,0 check by using if else

#include<stdio.h>
#include<conio.h>
/*
int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	
	if (a>0)
	{ 
    	printf("given number is positive");
	}	
	else if(a<0)
	{
		printf("given number is negative"); 	
	}
	else
	{
		printf("given number is zero");
	}

return 0;
}

*/

    int main()
    {
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	
	if (a>0)
	{ 
    	printf("%d is positive",a);
	}	
	else if(a<0)
	{
		printf("%d is negative",a); 	
	}
	else
	{
		printf("%d is zero",a);
	}

return 0;
}
