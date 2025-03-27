#include<stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    for (int i=a;i<=1;i--){
        for (int j=1;j<=i;j++){
            printf("%d ",j+64);
        }
        printf("\n");
    }
    return 0;
}Loading Code...