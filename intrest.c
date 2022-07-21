#include<stdio.h>
void main()
{
	int p,r,n;
	float intrest;
	
	printf("\ntype value of p");
	scanf("\n%d",&p);
	
	printf("\ntype value of r");
	scanf("\n%d",&r);
	
	printf("ntype value of n");
	scanf("%d",&n);
	intrest=p*r*n/(float)100;
	printf("the intrest is %f ",intrest);
}