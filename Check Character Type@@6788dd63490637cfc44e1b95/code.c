#include <stdio.h>
int main() {
    char aplha;
    scanf("%c",&alpha);
    if (aplha=='a'|| aplha ='e'|| aplha=='i'|| aplha == 'o' ||aplha=='u'){
        printf("Vowel");
    }
    else if (aplha >='a' && aplha <='z'){
        printf("Consonant");
    }
    else if (aplha>='0' && alpha <='9'){
        printf("Digits");
    }
    else{
        printf("Special Characher");
    }
    return 0;
}