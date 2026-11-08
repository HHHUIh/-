#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double x1,x2,y1,y2,e,m=0;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);

    e=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    m=fabs(x1-x2)+fabs(y1-y2);

    printf("%f",m-e);
    return 0;
}
