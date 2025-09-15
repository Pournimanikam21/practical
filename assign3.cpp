#include<iostream>

using namespace std;

float area ( float radius)
{
  
  return 3.142 * radius * radius;

}

int area ( int length, int breath)
{
 
  return length * breath ;
  
}

float area ( float base , float height)
{
  
  return 0.5 * base * height ;
  
}

int main()
{
 float radius;
 int length, breath;
 float base,height;
 
 cout << "Enter the radius of Circle : ";
 cin >> radius;
 cout << "Area of Circle = " << area(radius) << endl;
 
 
 cout << "Enter the length and breath of Rectangle : " ;
 cin >> length >> breath ;
 cout << "Area of Rectangle = " << area(length, breath) << endl;
 
 cout << " Enter the base and height of Triangle : " ;
 cin >> base >> height ;
 cout << "Area of Triangle =" << area(base , height) << endl;
 
 return 0;
 
}

