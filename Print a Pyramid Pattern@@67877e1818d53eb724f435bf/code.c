#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=a;i>=1;i--){
        for (int j=1;j<=a;j++){
            if (j<i){
                printf(" ");
            }
            if (j>=i){
                printf("*");
            }
        }
        for (int k=1;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}