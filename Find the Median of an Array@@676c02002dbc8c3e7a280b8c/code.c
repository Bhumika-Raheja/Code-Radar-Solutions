#include <stdio.h>
int main() {
    int a;
    scanf ("%d %d");
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a-1;j++){
        for (int i=0;i<a-1;i++){
            if (arr[i]>arr[i+1]){
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    if (a%2!=0){
        printf("%d",arr[(a+1)/2]);
    }
    else{
        printf("%d",(arr[a/2]+arr[(a/2)+1])/2);
    }
    return 0;
}