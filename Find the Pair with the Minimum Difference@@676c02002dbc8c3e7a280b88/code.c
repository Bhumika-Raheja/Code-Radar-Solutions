#include <stdio.h>
#include <limits.h>
int main() {
    int a,min=INT_MAXm=0,n=0;
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
                a=arr[i]-arr[j];
            }
            if (a<min){
                min=a;
                m=i;
                n=j;
            }
        }
    }
    printf("%d %d",m,n);
    return 0;
}