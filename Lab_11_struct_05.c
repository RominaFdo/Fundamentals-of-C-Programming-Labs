#include <stdio.h>
struct Student{
    char name[20] ;
    int marks;
};

int main(){
    struct Student Stu[10];
    printf("Enter information of students:\n");
    for (int i =0; i<10; i++){
        printf("\nFor roll number %d\n",i+1);
        printf("Enter name:");
        scanf("%s" , &Stu[i].name);
        printf("Enter marks :");
        scanf("%d" , &Stu[i].marks);
    }


    printf("Displaying information of students:\n");
    for (int i =0; i<10; i++){
        printf("\nInformation for roll number %d:\n",i+1);
        printf("Name: %s\n" , Stu[i].name);
        printf("Marks: %d\n" , Stu[i].marks);
    }

}