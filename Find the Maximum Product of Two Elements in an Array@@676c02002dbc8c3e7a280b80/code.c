#include <stdio.h>
int main() {
    int a,max=0;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++){
        for (int i=j+1;j<a;j++){
            int product =arr[i]*arr[j];
            if (product >=max){
                max=product;
            }
        }
    }
    printf("%d",max);
    return 0;
}