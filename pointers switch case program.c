#include <stdio.h>
int main (){

 int a,b;
 int *p1,*p2;
 char c;

 printf("enter character");
 scanf("%c",&c);



 printf("enter value");
 scanf("%d",&a);

 printf("enter value");
 scanf("%d",&b);


 p1 = &a;
 p2 = &b;

 printf("value is:%d\n",*p1);
 printf("value is:%d\n",*p2);


 int addition, subtraction, multplication, division, modulus;

 switch(c){
   case '+':
   printf("addition is : %d\n",*p1 + *p2);
   break;


   case '-':
   printf("substraction is : %d\n",*p1 - *p2);
   break;


   case '*':
   printf("multplication is : %d\n",*p1 * *p2);
   break;



   case '/':
   printf("division is : %d\n",*p1 / *p2);
   break;


   case '%':
   printf("modulus is : %d\n",*p1 % *p2);
   break;


}





}

