
#include<stdio.h>

void main()
{
	int i[11],a,max;
	for(a=1;a<11;a++)
	{
		printf("\nEnter Element %d = ",a);
		scanf("%d",&i[a]);
	}
	max=i[0];
	printf("\n\n=*=*=*=*=*=*=*=*=*=*=*=*=*=");
	printf("\nElements Are ");
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*=");
	for(a=1;a<11;a++)
	{
		printf("\nElement [%d] = %d",a,i[a]);
		if(max < i[a])
		{
			max=i[a];
		}
	}
	printf("\n\n=*=*=*=*;;=*=*=*=*=*=*=*=*=*=");
	printf("\nmax Number is : %d",max);
	printf("\n=*=*=*=*=*=*=*=*=*=*=*=*=*=");
}