#include <stdio.h>
int x,n=1,s=1,t;
int main()
{
    scanf("%d",&x);
    while (s%x!=0)
        {
            n+=1;
            s=s*10+1;
        }
    t=s/x;
    printf("%d %d",t,n);
}