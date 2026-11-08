#include <stdio.h>

int main() {
    int v,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    v=(a+b+c)/3;
    if(v<60){
        printf("YES");
    }else{printf("NO");}
    return 0;
}
