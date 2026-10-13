#include <stdio.h>

int isMultipleOf ( int a, int b );

int isMultipleOf ( int a, int b )
{
    int n=0;
    if (b!=0) 
        if(a%b==0) n=1;
    if (a==0&&b==0) n=1;
    return n;
}

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%d\n", isMultipleOf(a, b));
  return 0;
}