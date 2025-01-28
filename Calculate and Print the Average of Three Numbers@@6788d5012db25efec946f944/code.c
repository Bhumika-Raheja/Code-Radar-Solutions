#include <stdio.h>

int main() {
    float a,b,c,d;
    float e;
    scanf("%f %f %f",&a,&b,&c);
    d=a+b+c;
    e=d/3;
    printf("Average: %.2f", e);
    return 0;
}