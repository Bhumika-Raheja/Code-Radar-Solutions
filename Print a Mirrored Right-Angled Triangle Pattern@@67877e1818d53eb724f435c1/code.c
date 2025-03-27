#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=a;i>=1;i--){
        for (int j=1;j<i;j++){
            printf("a");
        }

        for(int k=i;k>0;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}