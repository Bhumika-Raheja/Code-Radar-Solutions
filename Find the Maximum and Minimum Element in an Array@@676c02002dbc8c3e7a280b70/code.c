#include <stdio.h> 
int main(){
    int a,max=0,min=0;
    int arr[]={};
    for (int i=0;i<a;i++){
        scanf("%d",&a);
        arr[i]=a;
    }
    printf("&d",arr)
    for (int i=0;i<a;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    for (int i=0;i<a;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}