#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (int i=0;i<a;i++){
        count+=arr[i];
        printf("%d ",count);
    }
    return 0;
}