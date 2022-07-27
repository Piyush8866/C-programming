
#include<stdio.h>

void main()
{
	int a[100],i,n,position , search;
	
	printf("ENTER SIZE OF THE ARRAY : ");
	scanf("%d",&n);
	
//	printf("ENTER ELEMENS IN ARRAY : ");
	for(i=0;i<n;i++)
	{
		printf("\nenter element is %d : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nENTER THE SEARCH : ");
	scanf("%d",&search);
	
	position = 0;
	
	for(i=0;i<n;i++)
	{
		if(a[i] == search)
		{
			position=2;
			break;
		}
	}
    if(position==2)
    {
    	printf("\nEnter a search of element of position %d",i);
	}
	else 
	{
		printf("invalid choice");
	}
}