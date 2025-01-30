#include <stdio.h>
int main() {
    char alpha;
    scanf("%c",&alpha);
    if (alpha>='0' && alpha <='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}