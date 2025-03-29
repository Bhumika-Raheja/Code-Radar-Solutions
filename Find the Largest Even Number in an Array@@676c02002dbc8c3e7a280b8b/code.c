#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],even=0;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2==0){
            even +=1;
        }
    }
    if (even==0){
        printf("-1");
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
    for (int j=a-1;j>=0;j--){
        if (arr[j]%2==0){
            printf("%d",arr[j]);
            break ;
        }
    }
    return 0;
}