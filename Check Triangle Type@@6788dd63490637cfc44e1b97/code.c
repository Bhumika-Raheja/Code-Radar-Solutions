#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && a==c){
        printf("Equlateral");
    }
    
    else{
        printf("Isosceles");
    }
    printf("%s", welcome());
    return 0;
}