/*implicit type operator ; done by the compiler without any user inerference
#include<stdio.h>
int main()
{
    int a=7,b=2;
    float c;
    c=a/b;
    printf("c = %f",c);
    return 0;
}*/

/*explicit type operator ; conversion will be done by the user
syntax :    int a;
            float c;
            c=(float)a;*/
#include<stdio.h>
int main()
{
    int a=7,b=2;
    float c;
    c=(float)a/(float)b;
    printf("c = %f",c);
    return 0;
}
