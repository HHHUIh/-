#include <stdio.h>

int main() {
    int a, b,c;
    scanf("%d",&a);
    b=a%100;
    if(b>=3&&b<=5){
        printf("spring");
    }else if(b>=6&&b<=8){
        printf("summer");
    }else if(b>=9&&b<=11){
        printf("autumn");
    }else if(b==12||b<=2){
        printf("winter");
    }
    return 0;
}
