#include <stdio.h>
int main() {
    int a,k,total=0,ind=0;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    if (a%2==0){
        k=a/2;
    }
    else{
        k=(a+1)/2;
    }
    for (int i=0;i<a;i++){
        int count=1;
        for (int j=i+1;j<a;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count>=k){
            total++;
            ind=i;
        }
    }
    if (total==1){
        printf("%d",arr[ind]);
    }
    else{
        printf("-1");
    }
    return 0;
}