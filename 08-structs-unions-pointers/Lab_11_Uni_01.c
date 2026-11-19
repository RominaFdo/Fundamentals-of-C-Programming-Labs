#include <stdio.h>
#include <string.h>

union Student{
    char name[20] ;
    int roll;
    int mark;
};

int main(){
    union Student Stu1;
    strcpy(Stu1.name ,"Gagath");
    Stu1.roll = 100;
    Stu1.mark = 63;


    printf("Name: %s\n" , Stu1.name);
    printf("Roll: %d\n" , Stu1.roll);
    printf("Mark: %d\n" , Stu1.mark);

}