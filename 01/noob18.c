#include <stdio.h>

int main() {
    int S,V,a,b,c=0;
    scanf("%d %d %d",&a,&b,&c);
    S=2*(a*b+b*c+c*a);
    V=a*b*c;
    printf("%d\n",S);
    printf("%d",V);
    return 0;
}
