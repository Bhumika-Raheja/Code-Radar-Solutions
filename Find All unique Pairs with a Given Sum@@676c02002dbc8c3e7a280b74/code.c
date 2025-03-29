#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf ("%d",&k);
    for (int i=0;i<a-1;i++){
        for (int j=i+1;j<a;j++){
            if (arr[i]+arr[j]==k){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}