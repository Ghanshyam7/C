//Teenager or not
#include <stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    (age>=13&&age<=19)?printf("teenager"):printf("not a teenager");
    return 0;
}
