#include <stdio.h>
int main() {
    char alpha;
    scanf("%c",&alpha);
    if (alpha=='a'|| alpha ='e'|| alpha=='i'|| alpha == 'o' ||alpha=='u'){
        printf("Vowel");
    }
    else if (alpha >='a' && alpha <='z'){
        printf("Consonant");
    }
    else if (alpha>='0' && alpha <='9'){
        printf("Digits");
    }
    else{
        printf("Special Character");
    }
    return 0;
}