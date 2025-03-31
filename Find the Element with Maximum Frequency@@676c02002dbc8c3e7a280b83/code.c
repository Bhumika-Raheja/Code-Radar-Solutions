#include <stdio.h>
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a],visited[a],max=0,index=0;
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for (int i=0;i<a;i++){
        count=1;
        if (visited[i]!=0){
            for (int j=i+1;j<a;j++){
                if (arr[i]==arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
        }
        if (count>max){
            max=count;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}.