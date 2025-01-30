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
    else {
        printf("Invalid grade");
    }
    return 0;
}