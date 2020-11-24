#include <stdio.h>
int main()
{
    char x;
    printf("enter a character : ");
    scanf("%c,",&x);
    if(x>='a'&&x<='z'||x>='A'&&x<='Z')
    {
        printf("alphabet");
    }
    else if(x>='0'&&x<='9')
    {
        printf("digit");
    }
    else
    {
        printf("special character");
    }
    return 0;
}
