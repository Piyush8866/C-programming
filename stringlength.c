
#include<stdio.h>
void main()
{
	char ch[10];
	int i,len=0;
	printf("Enter the string name:");
	scanf("%s",&ch);
	printf("String name is %s ",ch);
	
	for(i=0;ch[i]!='\0';i++)	
	{
		len++;	
	}
	printf("\nLength of string is %d",len);
}