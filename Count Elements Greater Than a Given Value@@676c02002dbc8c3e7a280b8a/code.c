#include <stdio.h>
int main() {
    int a,k;
    scanf ("%d",&a,&k,count=0);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a-1;i++){
        if (arr[i]>k){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}