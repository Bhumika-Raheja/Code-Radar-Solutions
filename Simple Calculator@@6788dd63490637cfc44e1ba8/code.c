#include <stdio.h>
int main() {
    int a,b,c;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    if (op=='+'){
        c=a+b
        printf("%d",c)
    }
    return 0;
}