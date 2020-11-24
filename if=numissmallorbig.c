//write a program to take input from the user and check if the number <10 then print "number is smaller"
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if(a<10)
    {
        printf("number is smaller");
    }
    printf("number is bigger");
}
