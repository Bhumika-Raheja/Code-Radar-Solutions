#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],sum=0;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++){
        sum += arr[j];
    }
    printf("%d",sum);
    return 0;
}