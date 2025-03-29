#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],array[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++){
        array[j]=arr[a-i-1];
    }
    int count=0;
    for (int j=0;j<a;j++){
        for (int j=0;j<a;j++){
            if(i==j){
                if (arr[i]!=array[j]){
                    count+=1;
                    break;
                }
            }
        }
    }
    if (count==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}