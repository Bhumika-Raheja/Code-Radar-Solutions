#include <stdio.h>
int main() {
    int a,k,count=0;
    scanf ("%d %d",&a,&k);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        if (arr[i]==k){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}