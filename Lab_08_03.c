#include <stdio.h>
int main() {
    int Ages[10],Count = 0;
    printf("Enter the ages of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &Ages[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (Ages[i] >= 17 && Ages[i] <= 19) {
            Count++;
        }
    }
    printf("Number of students with ages between 17 and 19: %d\n", Count);

    return 0;
}