#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a-1;i++){
        for (int j=i+1;j<a;j++){
            if (arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
    return 0;
}