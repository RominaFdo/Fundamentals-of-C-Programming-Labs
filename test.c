#include <stdio.h>
int main(){
    int c = 0;
    long int a;
    long int nic[10];
    long int *b;
    long int mul[0];
    b = &mul[0];
    for (int i= 0; i<10; i++){
        printf("Enter NIC number :");
        scanf("%ld" ,&a);
        int n= sizeof(nic) / sizeof(long int);
        for (int j= 0; j<n; j++){
            if (a == nic[j]){
                printf("YES\n");
                c = 1;
                break;
            }
            else{
                c = 0;
                printf("NO\n");
            }
        }
        printf("----------------");
        for (int i=0; i<10; i++){
            printf("%ld " , nic[i]);
        }
        printf("----------------");
        if (c == 1){
            *b = a;
            b++;
        }
        else{
            nic[i] = a;
        }
    }
    printf("NICs of people who visited multiple times \n");
    for (int i=0; i<10; i++){
        printf("%ld " , mul[i]);
    }
    printf("NICs of people who visited multiple times \n");
    for (int i=0; i<10; i++){
        printf("%ld " , nic[i]);
    }
    return 0;
}