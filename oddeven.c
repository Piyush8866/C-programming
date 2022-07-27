#include<stdio.h>

void main()
{
	int i[10],a,even=0,odd=0;
	
	for(a=1;a<=10;a++)
	{
		printf("\nEnter Array [%d] : ",a);
		scanf("%d",&i[a]);
	}
	
	printf("\nElements are ");
	for(a=1;a<=10;a++)
	{
//		printf("\nElements [%d] = %d",a,i[a]);
		if(i[a] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\nEven Number = %d",even);
	printf("\n Odd Number = %d",odd);
}