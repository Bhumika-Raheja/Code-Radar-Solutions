#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],min=INT_MAX,neww;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a-1;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<a-1;j++){
            if (arr[j+1]<arr[j]){
                int sw=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=sw;
            }
        }
    }
    for (int i=0;i<a-1;i++){
        if (arr[i]!=neww){
            printf("%d",neww);
        }
        neww++;
    }
    return 0;
}