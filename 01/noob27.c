#include <stdio.h>

int main() {
    int a, min,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(c>max)max=c;
    if(b>max)max=b;
    min=a;
    if(b<min)min=b;
    if(c<min)min=c;
    printf("The maximum number is : %d\n",max);
    printf("The minimum number is : %d\n",min);
    return 0;
}
