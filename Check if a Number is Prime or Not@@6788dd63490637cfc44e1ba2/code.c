#include <stdio.h>
int main() {
    int a;
    int i;
    scanf("%d",&a);
    if (a<2){
        printf("Not Prime");
    }
    else if(a==2){
        printf("Prime");
    }
    else {
        for (i=2;i<a;i++){
            if(a%i==0){
                printf("Not Prime");
                return 0;
            }
            else{
                printf("Prime");
                break;
            }
    }
    return 0;
}
}