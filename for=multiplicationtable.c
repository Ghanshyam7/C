#include <stdio.h>
int main()
{
    int i=1,a;
    printf("enter a number : ");
    scanf("%d",&a);
    for(int i=1;i<=10;i=i+1)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
}
