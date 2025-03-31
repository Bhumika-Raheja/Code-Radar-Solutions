#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf ("%d",&k);
    k=k%a;
        for (int i=a-k;i<a;i++){
            printf("%d ",arr[i]);
        }
        for (int i=0;i<a-k;i++){
            printf("%d ",arr[i]);
        }
    return 0;
} 