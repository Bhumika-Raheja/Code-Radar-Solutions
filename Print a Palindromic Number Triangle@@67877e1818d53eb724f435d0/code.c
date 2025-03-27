#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=a;i>=1;i--){
        for (int j=1;j<=a;j++){
            if (j<1){
                printf("%d",j);
            }
        }
    }
    return 0 ;
}