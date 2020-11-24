#include <stdio.h>
int main()
{
    char x='a';
    do
    {
        printf("%c\n",x);
        x=x+1;
    }
    while(x>='a'&&x<='z');
}
