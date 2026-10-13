#include <stdio.h>
double a=1.0,sum=0;
int N,b=1;
int main()
{
    scanf("%d",&N);
    for (;a<=N;a++)
    {
        if (b%2==1) sum+=a/(2*a-1);
        else sum-=a/(2*a-1);
        b+=1;
    }
    printf("%3f",sum);
    return 0;
}