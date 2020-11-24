//take input from the user and check if number is <10 then print "number is smaller" otherwise print "number is greater"
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
    else
    {
        printf("number is greater");
    }
    return 0;
}
