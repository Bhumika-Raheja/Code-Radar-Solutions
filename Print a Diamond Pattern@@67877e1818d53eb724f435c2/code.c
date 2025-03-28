#include <stdio.h>
int main(){
    int a,ns;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)}{
        for (int j=1;j<=(a-i);j++){
            printf(" ");
        }
        for (int k=1;k<=ns;k++){
            printf("*");
        }
        printf("\n");
        ns = ns+2;
    }
    ns=ns-2;
    for (int i=1;i<a;i++){
        for (int j=1;j<=i;j++){
            printf(" ");
        }
        for (int k=1;k<=ns;k++){
            printf("*");
        }
        ns=ns-2
        printf("\n");
    }
}