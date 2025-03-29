#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],count=0;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++){
        if (arr[j]==0){
            count+=1;
        }
    }
    for (int j=0;j<a;j++){
        if (arr[j]!=0){
            printf("%d ",arr[j]);
        }
    }
    for (int j=0;j<count;j++){
        printf("0 ");
    }
    return 0;
}