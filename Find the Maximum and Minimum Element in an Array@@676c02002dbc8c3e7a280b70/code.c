#include <stdio.h> 
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
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