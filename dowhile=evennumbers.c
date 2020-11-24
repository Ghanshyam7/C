#include <stdio.h>
int main()
{
    int a=2,x;
    printf("enter the upper limit : ");
    scanf("%d",&x);
    do
    {
        printf("%d\n",a);
        a=a+2;
    }
    while(a<=x);
}
