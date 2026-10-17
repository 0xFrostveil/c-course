#include <stdio.h>
int n=0,i=0,k=1;
int main()
{
    scanf("%d",&n);
    while (n!=0)
    {
        for (;i<n;i++)
        {
        printf("%4d",k);
        k+=1;
        }
        printf("\n");
        n-=1;
        i=0;
    }
    return 0;
}