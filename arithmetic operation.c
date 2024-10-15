#include<stdio.h>
int main()
{
   char opareters;

   printf("enter your choice:");
   scanf("%c",&opareters);

   switch(opareters)
{
   case '+':
       {
       int num1,num2,add;
       printf("enter the num1 and num2: ");
       scanf("%d %d",&num1,&num2);
       add=num1+num2;
       printf("the addition of %d and %d is %d",num1,num2,add);
       break;
       }
   case '-':
       {
       int num1,num2,sub;
       printf("enter the num1 and num2");
       scanf("%d%d",&num1,&num2);
       sub=num1-num2;
       printf("the subtraction of %d and %d is %d,num1,num2,sub:");
       break;
       }
   case '*':
       {
        float num1,num2,mul;
        printf("enter the num1 and num2");
        scanf("%f%f",&num1,&num2);
        mul=num1*num2;
        printf("the multiplication of %f and %f is %f,num1,num2,mul:");
        break;
       }
   case '/':
       {
        float num1,num2,div;
        printf("enter the num1 and num2");
        scanf("%f%f",&num1,&num2);
        div=num1/num2;
        printf("the division of %f and %f is %f",num1,num2,div);
        break;
       }
   case '%':
        {
         int num1,num2,remainder;
         printf("enter the num1 and num2");
         scanf("%d%d",&num1,&num2);
         remainder=num1%num2;
         printf("the remainder of %f and %f is %f",num1,num2,remainder);
         break;
        }
  default:
       {
           printf("invalid choice");
       }







}






}
