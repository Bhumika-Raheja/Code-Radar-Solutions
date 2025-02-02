#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a<2){
        printf("Not Prime");
    }
    for (i=2;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }
    }
    return 0;
}