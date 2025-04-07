#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],min=INT_MAX;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a-1;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}