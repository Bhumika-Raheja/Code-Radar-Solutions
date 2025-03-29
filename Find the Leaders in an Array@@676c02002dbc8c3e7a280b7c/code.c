#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a-1;i++){
        int count=0
        for (int j=i+1;i<a;i++){
            if (arr[i]>arr[j])[
                count+=1;
            ]
        }
        if(count==0){
            printf("%d \n",arr[i]);
        }
    }
    printf("%d",arr[a-1]);
    return 0;
}