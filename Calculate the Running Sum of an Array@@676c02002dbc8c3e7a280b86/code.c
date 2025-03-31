#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a-1;i++){
        int count=0
        for (int j=i;j<a;i++){
            count+=arr[j];
        }
        printf("%d ",count);
    }
    int sum=0;
    for (int i=0;i<a-1;i++){
        sum+=arr[i];
    }
    printf("%d ",sum);
    return 0;
}