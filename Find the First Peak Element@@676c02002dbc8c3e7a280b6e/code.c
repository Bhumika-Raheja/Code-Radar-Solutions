#include <stdio.h> 
int main(){
    int a,max=0;
    int arr[]={};
    for (int i=0;i<a;i++){
        scanf("%d",&a);
        arr[i]=a;
    }
    for (int i=0;i<a;i++){
        if (arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            max=1;
            break;
        }
    }
    if (max==0){
        printf("-1");
    }
    return 0;
}