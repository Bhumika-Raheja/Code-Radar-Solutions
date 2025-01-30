#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("%d",a);
    }
    else if (b>c && b>a){
        print("%d",b);
    }else{
        print("%d",c);
    }
    printf("%s", welcome());
    return 0;
}