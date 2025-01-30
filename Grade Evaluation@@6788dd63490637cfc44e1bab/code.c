#include <stdio.h>
int main() {
    char gr;
    scanf("%c",&gr);
    if (gr=='A'){
        printf("Excellent");
    }
    else if (gr=='B'){
        printf("Good");
    }
    else if (gr=='C'){
        printf("Average");
    }
    else if(gr=='D'){
        printf("Below Average");
    }
    else if(gr=='F'){
        printf("Fail")
    }
    else {
        printf("Invalid grade");
    }
    return 0;
}