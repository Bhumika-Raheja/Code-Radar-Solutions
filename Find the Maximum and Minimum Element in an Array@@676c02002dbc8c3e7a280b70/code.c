#include <stdio.h> 
int main(){
    int a,max=0,min=0;
    scanf("%d",&a);
    int arr[];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        arr[i]=a;
    }
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