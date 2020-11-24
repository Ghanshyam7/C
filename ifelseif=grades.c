#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks : ");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("A Grade");
    }
    else if(marks>=80&&marks<90)
    {
        printf("B Grade");
    }
    else if(marks>=70&&marks<80)
    {
        printf("C Grade");
    }
    else if(marks>=60&&marks<70)
    {
        printf("D Grade");
    }
    else if(marks<60)
    {
        printf("Failed");
    }
}
