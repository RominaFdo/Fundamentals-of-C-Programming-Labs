
#include <stdio.h>

int main() {
    char letter;
    printf("Enter a character :  \n");
    scanf("%c", &letter);
    if ((letter>='a' && letter<'z') || (letter>='A' && letter<'Z')) {
        printf("Character is an alphabet.");
    }
    else {
        printf("Character is not an alphabet.");
    }
    return 0;
}
