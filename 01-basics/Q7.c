#include <stdio.h>
int main() {
    int Number_of_hours;
    printf("Enter Number of hours :\n");
    scanf( "%d" , &Number_of_hours);
    int Hourly_rate;
    printf("Enter Hourly rate :\n");
    scanf( "%d" , &Hourly_rate);
    int Gross_salary= Number_of_hours * Hourly_rate;
    int deduction_rate=8;
    float deduction= Gross_salary* deduction_rate/100;
    float Net_salary = Gross_salary-deduction;
    printf("Net salary of the Employee : Rs %.2f", Net_salary);
    return 0;
}
