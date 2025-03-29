#include <stdio.h>
#include <limits.h>
int main() {
    int a,count=0;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++){
        if (arr[j]>arr[j+1]){
            count+=1;
        }
    }
    if (count==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}