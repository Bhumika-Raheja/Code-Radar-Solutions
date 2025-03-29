#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],max=arr[0],indexx=0;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        if (arr[i]>=max){
            max=arr[i];
            indexx=i;
        }
    }
    max=arr[0];
    arr[indexx]=INT_MIN;
    for (int i=0;i<a;i++){
        if (arr[i]>=max){
            max=arr[i];
        }
    }
    printf("%d ",max);
    return 0;
}