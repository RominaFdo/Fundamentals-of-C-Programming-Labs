#include <stdio.h>
struct Student{
    int id;
    char F_name[20] ;
    char L_name[20] ;
    int age;
    char city[15];
};

int main(){
    struct Student Stu1;
    printf("Enter student id :");
    scanf("%d" , &Stu1.id);

    printf("Enter student First name :");
    scanf("%s" , &Stu1.F_name);

    printf("Enter student Last name :");
    scanf("%s" , &Stu1.L_name);

    printf("Enter student age :");
    scanf("%d" , &Stu1.age);

    printf("Enter student city :");
    scanf("%s" , &Stu1.city);

    printf("Student ID : %d " , Stu1.id);
    printf("\nStudent Name: %s %s\n" , Stu1.F_name, Stu1.L_name);
    printf("Student Age : %d\n" , Stu1.age);
    printf("Student City : %s\n" , Stu1.city);
}