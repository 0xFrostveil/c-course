#include <stdio.h>
int i,n,m,p;
int main()
{
    scanf("%d",&n);
    while (m!=n)
        {
            i+=1;
            m=n;
            p=m;
            n=0;
            while (p!=0)
                {
                    n+=p%10;
                    p/=10;
                }
            n=n*3+1;
            printf("%d:%d\n",i,n);
        }
    return 0;
}