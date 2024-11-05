#include<stdio.h>
void main()
{
    int a;
    int b;
    int c;
    printf("enter three nos:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("a is greater ");
    }
    else if(b>a && b>c)
    {
        printf("b is greater ");
    }
    else 
    {
       printf("c is greatest");
    }
}
