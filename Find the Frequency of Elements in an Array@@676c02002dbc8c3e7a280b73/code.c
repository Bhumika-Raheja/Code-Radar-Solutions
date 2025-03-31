#include <stdio.h>
int main(){
    int a;
    scanf ("%d",&a);
    int arr[a],visited[a];
    for (int i=0;i<a;i++){
        scanf ("%d",arr[i]);
        visited[i]=0;
    }
    for (int i=0,i<a;i++){
        if (visited[i]==1){
            continue;
        }
        int count=1;
        else{
            for (int j=i+1;j<n;j++){
                if (arr[i]=arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
            printf("%d %d",arr[i],count);
        }
    }
    return 0;
}