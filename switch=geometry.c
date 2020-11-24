/*program to show geometry*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a print number : ");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
        printf("no point");
        break;
        case 1:
        printf("point");
        break;
        case 2:
        printf("line");
        break;
        case 3:
        printf("triangle");
        break;
        case 4:
        printf("square");
        break;
        case 5:
        printf("pentagon");
        break;
         default:
            printf("enter a valid point number ranging from 1-5");
            break;
    }
}
