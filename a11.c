#include <stdio.h>
int a,b,flag=0;
int main()
{
    scanf("%d %d",&a,&b);
    if (a<=6&&6<=b) {printf("6 = 1 + 2 + 3\n");flag=1;}
    if (a<=28&&28<=b) {printf("28 = 1 + 2 + 4 + 7 + 14\n");flag=1;}
    if (a<=496&&496<=b) {printf("496 = 1 + 2 + 4 + 8 + 16 +31 + 62 + 124 + 248\n");flag=1;}
    if (a<=8128&&8128<=b) {printf("8128= 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064\n");flag=1;}
    if (flag==0) printf("None");
    return 0;
}
