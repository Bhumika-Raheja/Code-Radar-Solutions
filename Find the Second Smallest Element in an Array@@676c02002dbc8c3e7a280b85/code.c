#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],min=INT_MAX,smin=INT_MAX;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    if (a<=1){
        printf("-1");
    }
    else{
        for (int i=0;i<a;i++){
            if (arr[i]<min){
                smin=min;
                min=arr[i];
            }
            else if (arr[i] < smax && arr[i] > max) {
                smin = arr[i];
            }
            
        }
        if (smin == INT_MIN) {
            printf("-1");
        }
        else{
        printf("%d",smax);
        }
    }
    return 0;
}