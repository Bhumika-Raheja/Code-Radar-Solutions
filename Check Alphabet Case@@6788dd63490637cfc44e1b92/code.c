#include <stdio.h>
int main() {
    char alpha;
    scanf("%c",alpha);
    if (alpha = 'A' && alpha='Z'){
        printf("Uppercase");
    }
    else if (aplha ='a' && alpha='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}