#include <stdio.h>
int main(){
    float h, cc , ts; //h --> Hardness , cc --> Carbon Content , ts --> Tensile Strength
    printf("Enter Hardness, Carbon content and Tensile strength of the steel.\n");
    scanf("%f %f %f", &h , &cc, &ts);
    if (h>50 && cc<0.7 && ts>5600){
        printf("Grade : 10");
    }
    else if (h>50 && cc<0.7){
        printf("Grade : 9");
    }
    else if (cc<0.7 && ts>5600){
        printf("Grade : 8");
    }
    else if (h>50 && ts>5600){
        printf("Grade : 7");
    }
    else if (h>50 || cc<0.7 || ts>5600){
        printf("Grade : 6");
    }
    else{
        printf("Grade : 5");
    }
}
