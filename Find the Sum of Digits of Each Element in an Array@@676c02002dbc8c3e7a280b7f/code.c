#include <stdio.h>
int sum(int a){
    int digit=0 , add , left;
    add=a%10;
    digit+=add;
    left=a/10;
    if (left>0){
        return add + sum(left);
    }
    else{
        return add;
    }
}
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<a;j++){
        int s=0;
        s = sum(arr[j]);
        printf("%d ",s);
    }
    return 0;
}