#include <stdio.h>
int palindrome(int a){
    if (a<0){
        return 1;
    }
    else{
        int remainder,reversed=0,left;
        while (left>0){
            remainder = a%10;
            reversed = reversed*10+remainder;
            left = a/10;
        }
        if (a==reversed){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main() {
    int a;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        if (palindrome(arr[i])){
            printf("%d",arr[i]);
        }
    }
    return 0;
}