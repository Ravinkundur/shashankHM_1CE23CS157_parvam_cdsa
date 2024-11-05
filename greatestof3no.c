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
    if(a>b)
    {
        printf("a is greater than b");
    }
    else if(b>c)
    {
        printf("b is greater than c");
    }
    else 
    {
       printf("c is greatest");
    }
}
