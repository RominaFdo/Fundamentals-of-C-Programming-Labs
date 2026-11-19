#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
#define IS_DIGIT(ch) (isdigit(ch) ? TRUE : FALSE)
#define IS_HEX(ch) (IS_DIGIT(ch) || ( \
    ((ch) >= 'A' && (ch) <= 'F') || \
    ((ch) >= 'a' && (ch) <= 'f')) ? printf("TRUE") : printf("FALSE"))

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    IS_HEX(character);
    return 0;
}