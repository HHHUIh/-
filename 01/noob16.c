#include <stdio.h>

int main() {
   int s,s1,m,h=0;
   scanf("%d",&s);
   h=s/3600;
   m=s%3600/60;
   s1=s%3600%60;
   printf("%d %d %d",h,m,s1);
    return 0;
}
