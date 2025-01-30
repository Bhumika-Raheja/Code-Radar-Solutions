#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("%d",a);
    }
    if (b>c && b>a){
        print("%d",b);
    }else{
        print("%d",c);
    }
    return 0;
}