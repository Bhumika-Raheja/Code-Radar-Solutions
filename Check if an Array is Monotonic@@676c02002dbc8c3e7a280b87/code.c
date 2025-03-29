#include <stdio.h>
int main() {
    int a,count=0,yes=0;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a-1;j++){
        if (arr[j]>arr[j+1]){
            count++
        }
    }
    if (count==0){
        yes+=1
        printf("YES");
    }
    count=0
    for (int j=0;j<a-1;j++){
        if (arr[j]<arr[j+1]){
            count++
        }
    }
    if (count==0){
        yes+=1
        printf("YES");
    }
    if (yes==0){
        printf("NO");
    }
    return 0;
}