#include "stdio.h"
#include <math.h>
double fact ( int n );
double MySin(double x,double epsilon);
double fact ( int n )
{
    int i;
    double result=1;
    for (i=1;i<=n;i++) result*=i;
    if (n==0) result=1;
    return result;
}
double MySin(double x,double epsilon)
{
    double j=1,t=0,k;
    k=(pow(-1,j-1))*(pow(x,2*j-1))/(fact(2*j-1));
    while (epsilon<k||k<(-1)*epsilon)
    {
        t=t+k;
        j+=1;
        k=(pow(-1,j-1))*(pow(x,2*j-1))/(fact(2*j-1));
    }
    return t;
}
int main()
{
    double x,epsilon;
    scanf("%lf%lf",&x,&epsilon);
    printf("%.15f\n",MySin(x,epsilon));
}