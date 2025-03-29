#include <stdio.h>
int palindrome(int a){
    if (a<0){
        return 0;
    }
    else{
        int remainder,reversed=0,left=a;
        while (left>0){
            remainder = left%10;
            reversed = reversed*10+remainder;
            left = left/10;
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
    int a,count=0;
    scanf ("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<a;i++){
        if (palindrome(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}