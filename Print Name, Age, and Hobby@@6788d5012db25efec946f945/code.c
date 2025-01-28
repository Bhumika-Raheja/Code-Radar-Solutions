#include <stdio.h>
int main() {
    char a[20],b[20];
    int c;
    scanf("%s %d %s", &a,&c,&b);
    printf("Name: %s\n", a);
    printf("Age: %d\n", c);
    printf("Hobby: %s", b);
    return 0;
}