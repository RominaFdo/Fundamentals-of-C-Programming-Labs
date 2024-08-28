#include <stdio.h>
#include <ctype.h>
#define IS_DIGIT(ch) (isdigit(ch)? printf("TRUE") : printf("FALSE"))

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    IS_DIGIT(character);
    return 0;
}