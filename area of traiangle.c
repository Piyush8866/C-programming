#include<stdio.h>
void main()
{
int h, b;
    int area;
    printf("\n\nEnter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\n\nEnter the base of the Triangle: ");
    scanf("%d", &b);
	area = (h*b)/2;
    printf("\n\n\nThe area of the triangle is: %d", area);	
}