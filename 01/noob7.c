#include <stdio.h>

int main() {
    double c,d=0;
    scanf("%lf %lf",&c,&d);
    printf("%.3f%%",d/c*100);
    return 0;
}
