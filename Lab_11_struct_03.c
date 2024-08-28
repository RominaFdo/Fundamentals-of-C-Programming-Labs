#include <stdio.h>
struct Student{
    char name[20] ;
    int roll;
};

int main(){
    struct Student Stu1;
    printf("Enter student's name:");
    scanf("%[^\n]s" , &Stu1.name);

    printf("Enter roll number :");
    scanf("%d" , &Stu1.roll);

    printf("Output\n");
    printf("Name: %s\n" , Stu1.name);
    printf("Roll: %d\n" , Stu1.roll);
}