#include <stdio.h>
int main()
{
    int i=1,n,a=0,b=1,c;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("Fibonacci Series : ");
    do
    {
        printf("%d,",a);
        ++i;
        c=a+b;
        a=b;
        b=c;
    }
    while(i<=n);
    return 0;
}
