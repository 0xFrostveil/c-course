#include <stdio.h>
int a,b,c,d,h,m;
int main()
{
    scanf("%4d %4d",&a,&b);
    c=a%100;
    d=b%100;
    a=a/100;
    b=b/100;
    h=b-a;
    m=d-c;
    if (m<0) 
    {
        m=m+60;
        h=h-1;
    }
    printf("%02d:%02d",h,m);
    return 0;
}