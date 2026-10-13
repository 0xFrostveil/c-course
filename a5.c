#include <stdio.h>
int n,c;
int main()
{
    scanf("%d",&n);
    while (n!=1)
        {
            if (n%2==0) n/=2;
            else n=3*n+1;
            c+=1;
        }
    printf("%d",c);
    return 0;
}