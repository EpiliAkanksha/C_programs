//program to print area and perimeter of a rectangle
#include<stdio.h>
int main()
{
	int length,width,area,perimeter;
	printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of rectangle: ");
    scanf("%d",&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("area of rectangle is %d \n", area);
    printf("perimeter of rectangle is %d \n",perimeter);
    return 0;
}
