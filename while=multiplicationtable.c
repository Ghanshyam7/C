#include <stdio.h>
int main()
{
    int a,i=1,multiplication;
    printf("Enter a number : ");
    scanf("%d",&a);
    while(i<=10)
    {
        multiplication=a*i;
        i=i+1;
        printf("%d*%d = %d\n",a,i,multiplication);
    }

    return 0;
}
