#include <stdio.h>
int main() {
    char aplha;
    scanf("%c",&alpha);
    if (aplha=='a'|| aplha ='e'|| aplha=='i'|| aplha = 'o' ||aplha='u'){
        printd("Vowel");
    }
    else if (aplha >='a' && aplha <='z' && aplha != 'a' && aplha!='e' && aplha!='i' && aplha!='o' && aplha!='u'){
        printf("Consonant");
    }
    else{
        printf("Special Characher");
    }
    return 0;
}