//Program to find area & circumference of a circle
#include<stdio.h>
int main()
{
    float area,circumference,r,pi=3.14;
    printf("\nenter the radius of the circle : ");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area : %f",area);
    circumference=2*pi*r;
    printf("\nCircumference : %f",circumference);
    return 0;
}
