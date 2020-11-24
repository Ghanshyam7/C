#include <stdio.h>
int main()
{
    int x=100;
    printf("before function call x = %d\n",x);
    change(&x);
    printf("after adding value inside function x = %d\n",x);
}
void change(int *num)
{
    printf("before adding value inside function num = %d\n",*num);
    *num=*num+100;
    printf("after adding value inside function num = %d\n",*num);
}
