
#include <stdio.h>

int main() {
    char ans;
    int amount , net;
    printf("If you are a member enter Y otherwise enter N:  \n");
    scanf("%c", &ans);
    switch(ans) {
        case ('Y') :
            printf("Enter your purchase amount :  \n");
            scanf("%d", &amount);

            if (amount > 5000){
                net = amount * 115 / 100;
            }

            else {
                net = amount * 110 / 100;
            }
            break;
        case ('N') :
            printf("Enter your purchase amount :  \n");
            scanf("%d", &amount);
            if (amount > 5000){
                net = amount * 107 / 100;
            }

           else{
                net = amount;
            }
            break;
    }
    printf("Net purchase amount :Rs.  %d" , net);
    return 0;
}
