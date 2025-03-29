#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],max=arr[0],smax;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        for (int j=0,j<a-1;j++){
            if (arr[j]>arr[j+1]){
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
    printf("%d",arr[a-2]);
    return 0;
}