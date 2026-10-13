#include <stdio.h>
int b,s;
float a,t,v;
int main()
{
    scanf("%d %d",&s,&b);
    v=b/3.6;
    a=v*v/s/2;
    t=2*s/v;
    printf("%.2f %.2f",a,t);
    return 0;
}