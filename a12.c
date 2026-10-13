#include <stdio.h>
int a,b;
int Perfect (int);
int Perfect (int x)
{
    int i,sum;
    for (i=1;i<=x/2;i++)
        {
            if (x%i==0) sum+=i;
        }
    if (sum==x) return 1;
    else return 0;
}
int main()
{
    scanf("%d %d",&a,&b);
    
}
