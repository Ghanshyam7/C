#include <stdio.h>
int main()
{
    char x='a',y='z';
    do
    {
        printf("%c%c\n",x,y);
        x=x+1;
        y=y-1;
    }
    while(x>='a'&&y<='z');
}
