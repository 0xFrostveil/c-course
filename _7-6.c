#include <stdio.h>
int a[101]={0};
int N,i,x;
int main()
{
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%d",&x);
        a[x]+=1;
        }
    for (i=100;i>=0;i--){
        while (a[i]!=0){
            a[i]-=1;
            printf("%d ",i);
        }
    }
    return 0;
}