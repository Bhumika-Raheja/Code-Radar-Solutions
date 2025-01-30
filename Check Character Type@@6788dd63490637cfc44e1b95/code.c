#include <stdio.h>
int main() {
    char alpha;
    scanf("%c",&alpha);
    if (alpha>='0' && alpha <='9'){
        printf("Digit");
    }
    else if(alpha=='a' || alpha=='e' || alpha=='i' || alpha =='o' || alpha=='u'){
        printf("Vowel");
    }
    else{
        printf("Special Character");
    }
    return 0;
}