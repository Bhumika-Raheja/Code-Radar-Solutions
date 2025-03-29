#include <stdio.h>
#include <limits.h>
int main() {
    int a,min=INT_MAX;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        for (int j=i+1;j<a;j++){
            int a;
            if (arr[j]>arr[i]){
                a=arr[j]-arr[i];
            }
            else{
                a=arr[j]-arr[i];
            }
            if (a<min){
                min=a;
            }
        }
    }
    printf("%d",min);
    return 0;
}