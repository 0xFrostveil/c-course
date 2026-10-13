#include <stdio.h>
int x,a;
int main()
{
    scanf("%d",&x);
    while (x>=0)
    {
        if (a<x) a=x;
        scanf("%d",&x);
    }
    printf("%d",a);
    return 0;
}