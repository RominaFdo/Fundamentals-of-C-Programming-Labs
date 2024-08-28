
#include <stdio.h>

int main() {
    char letter;
    printf("Enter a letter :  \n");
    scanf("%c", &letter);
    switch( letter) {
        case ('a'): case ('e'): case ('i'): case ('o'): case ('u'):
            printf("It is a vowel");
            break;

        case ('A'): case ('E'): case ('I'): case ('O'): case ('U'):
            printf("It is a vowel");
            break;

        default:
            printf("It is a consonant");
            break;
    }
    return 0;
}
