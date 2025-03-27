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
        for (int k=(a-1);k>=1;k--){
            if (k>=i){
                printf("*");
            }
            else{
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}