 #include<stdio.h>
 
 int main()
 {
 	int a,b,temp;
 	printf("enter (a,b) number:\n");
 	scanf("%d%d",&a,&b);
 	
 	//Swapting by using temporary variable.
 	temp=a;
 	a=b;
 	b=temp;
 	
 	printf("After swapting a=%d,b=%d",a,b);
 	
 	return 0;
 }
