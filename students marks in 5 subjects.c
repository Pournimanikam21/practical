#include<stdio.h>
int main()
{
  int english,maths,science,marathi,hindi,aggregate_marks;
  float percentage;

  printf("enter the marks of english:");
  printf("enter the marks of maths:");
  printf("enter the marks of science:");
  printf("enter the marks of marathi:");
  printf("enter the marks of hindi:");

  scanf("%d%d%d%d%d",&english,&maths,&science,&marathi,&hindi);

  aggregate_marks = english+maths+science+marathi+hindi;

  percentage = aggregate_marks / 5;

  printf("\naggregate_marks : %d",aggregate_marks);
  printf("\npercentage : %f", percentage);

  return 0;
}
