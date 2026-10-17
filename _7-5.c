#include <stdio.h>
int a[1000001]={0};/* 本来写的是a[100000]，有可能越界，下次注意数组长度*/
int N,i,x;
int main()
{
    scanf("%d",&N);
    scanf("%d",&x);
    printf("%d",x);
    a[x]=1;
    for (i=1;i<N;i++){
        scanf("%d",&x);
        if (a[x]==0){
            a[x]=1;
            printf(" %d",x);
        }
    }
    return 0;
}