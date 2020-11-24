#include <stdio.h>
int main()
{
    int a,i=1,multiplication;
    printf("enter a number : ");
    scanf("%d",&a);
    do
    {
        multiplication=a*i;
        printf("%d*%d=%d\n",a,i,multiplication);
        i=i+1;
    }
    while(i<=10);
    return 0;
}
