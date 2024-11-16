#include<stdio.h>
int main()
{
  float km, meters, feet, inches, centimeters;

  printf("enter the distance between two cities in kilometers:");
  scanf("%f",&km);

  meters = km * 1000;
  feet = km * 3280.84;
  inches = km * 39370.1;
  centimeters = km * 100000;

  printf("\ndistance in meters:%f",meters);
  printf("\ndistance in feet:%f",feet);
  printf("\ndistance in inches:%f",inches);
  printf("\ndistance in centimeters:%f",centimeters);

   return 0;
}
