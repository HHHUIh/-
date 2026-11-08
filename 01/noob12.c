#include <stdio.h>

int main() {
    int n,m,a,b,c,d=0;
    scanf("%d",&n);
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    d=n/1000;
    printf("%d%d%d%d",a,b,c,d);
    return 0;
}
