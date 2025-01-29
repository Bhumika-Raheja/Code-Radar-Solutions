#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>0 || b>0){
        printf("True");
    }else{
        printf("False");
    }
    printf("%s", welcome());
    return 0;
}