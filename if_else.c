#include<stdio.h>

void main()
{
	
	int a,b,c;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B:");
	scanf("%d",b);
		printf("\nEnter c:");
	scanf("%d",c);
	printf("\nA = %d, \nB=%d,\nc=%d",a,b,c);
	if(a>b)
	{
		if(a>c){
		
		printf("A is grater");
	}
	else 
	{
		printf("c is grater");
		
		
	}
}
		
else
	{	
		if(b>c)

{
	
	printf("\nB is grater");
}
else
{
	printf("c is grater");
		}	
}
}