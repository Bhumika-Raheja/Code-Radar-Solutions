#include <stdio.h>
int main() {
    int a,count=1;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            printf("%d",count);
            count=count+1;
        }
        printf("\n";)
    }
    return 0 ;
}