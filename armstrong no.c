#include<stdio.h>
int countdigits(int number)
{
   int count = 0;
   while (number!=0){
    number = number / 10;
    count++;
   }
    return count;
}
 int calculatesum(int number , int count){
    int sum = 0;
    int temp = number;

    while(temp != 0){
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    return sum;
}
 int main(){
     int number;
     printf("enter a number:");
     scanf("%d",&number);

     int numOfdigits = countdigits(number);
     int sum = calculatesum(number , numOfdigits);

     if(number == sum){

        printf("%d is an armstrong number.\n",number);
     }else{
         printf("%d is not an armstrong number.\n",number);
          }

     return 0;
 }






