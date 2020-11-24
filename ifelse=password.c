#include <stdio.h>
int main()
{
    int a;
    printf("enter the password : ");
    scanf("%d",&a);
    if(a==1234)
    {
        printf("Correct Password");
    }
    else
    {
        printf("Wrong Password");
    }
    return 0;
}

