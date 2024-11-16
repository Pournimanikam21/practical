#include<stdio.h>
int main()
{
  int div,sub;

  printf("enter the class obtained by student:");
  scanf("%d",&div);

  printf("enter the number of subject in which he has failed:");
  scanf("%d",&sub);

  switch(div)
  {
case 1:
    if(sub<=3)
        printf("he got the grace of %d marks",5*sub);
    else
        printf("he did not get the grace");
    break;

case 2:
    if(sub<=2)
        printf("he got the grace of %d marks",4*sub);
    else
        printf("he did not get the grace");
    break;

case 3:
    if(sub<=1)
        printf("he got the grace of %d marks",5*sub);
    else
        printf("he did not get the grace");
    break;

  }

}
