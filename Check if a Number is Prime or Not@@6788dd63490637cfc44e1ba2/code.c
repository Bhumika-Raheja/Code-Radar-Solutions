#include <stdio.h>
int main() {
    int a;
    int i;
    scanf("%d",&a);
    if (a<2){
        printf("Not Prime");
    }
    else {
        for (i=2;i<a;i++){
            if(a%i==0){
                printf("Not Prime");
                return 0;
            }
            else{
                printf("Not prime");
                break;
            }
    }
    return 0;
}
}