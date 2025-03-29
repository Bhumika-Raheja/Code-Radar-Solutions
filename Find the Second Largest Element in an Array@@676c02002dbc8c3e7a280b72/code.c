#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],max=INT_MIN,smax=-1;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    if (a<=1){
        printf("-1");
    }
    else{
        for (int i=0;i<a;i++){
            if (arr[i]>max){
                smax=max;
                max=arr[i];
            }
            else if (arr[i] > smax && arr[i] < max) {
                smax = arr[i];
            }
        }
        printf("%d",smax);
    }
    return 0;
}