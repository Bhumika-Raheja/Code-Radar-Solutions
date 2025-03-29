#include <stdio.h>
#include <limits.h>
int main() {
    int a,count=0,print;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++){
        for (int i=j+1;i<a;i++){
            if (count==0){
                if (arr[i]==arr[j]){
                    printf("%d",arr[j]);
                    count+=1;
                    print+=1
                }
            }
        }
    }
    if (print==0){
        printf("-1");
    }
    return 0;
}