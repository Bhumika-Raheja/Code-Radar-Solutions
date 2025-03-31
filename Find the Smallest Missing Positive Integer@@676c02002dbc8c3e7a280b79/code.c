#include <stdio.h>
int main() {
    int a,first;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a-1;i++){
        if (arr[i]>arr[i+1]){
            int swap=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=swap;
        }
    }
    first=arr[0];
    for (int i=0;i<a;i++){
        if (arr[i]!=first){
            printf("%d",first);
        }
        first++;
    }
    return 0;
}