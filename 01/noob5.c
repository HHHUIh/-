#include <stdio.h>

int main() {
    int a=0;
    long long b=0;
    double c=0;
    char d=0;
    char e[1000];

    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%lf",&c);
    scanf(" %c",&d);
    scanf("%s",e);

    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%.1f\n",c);
    printf("%c\n",d);
    printf("%s\n",e);

    return 0;
    }
    

