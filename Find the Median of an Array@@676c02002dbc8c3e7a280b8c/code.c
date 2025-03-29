#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a-1;j++){
        for (int i=0;i<a-1;i++){
            if (arr[i]>arr[i+1]){
                int c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
    }
    if (a%2!=0){
        printf("%d",arr[((a+1)/2)-1]);
    }
    else{
        printf("%d",(arr[a/2]+arr[(a/2)-1])/2);
    }
    return 0;
}