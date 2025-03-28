#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=(a-i);j++){
            printf(" ");
        }
        for (int k=1;k<=i;k++){
            printf("%d",k);
        }
        for (int m=(i-1);m >=1;m--){
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}