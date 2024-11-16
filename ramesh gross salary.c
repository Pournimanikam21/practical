#include<stdio.h>
int main()
{
   float basic_salary,dearness_allowance,house_rent_allowance,gross_salary;

   printf("enter the basic salary of Ramesh:");
   scanf("%f",&basic_salary);

   dearness_allowance = 0.4 * basic_salary;

   house_rent_allowance = 0.2 * basic_salary;

   gross_salary = basic_salary  + dearness_allowance + house_rent_allowance;

   printf("gross salary of Ramesh  is: %f",gross_salary);


   return 0;


}
