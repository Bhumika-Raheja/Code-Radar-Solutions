#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],max=arr[0],smax;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        if (arr[i]>max){
            smax=max
            max=arr[i];
        }
    }

    return 0;
}