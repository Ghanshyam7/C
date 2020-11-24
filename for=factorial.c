#include <stdio.h>
int main()
{
    int i,k=1,a;
    printf("enter a number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1)
    {
        k=k*i;
        printf("factorial of %d = %d\n",a,k);
    }
}
