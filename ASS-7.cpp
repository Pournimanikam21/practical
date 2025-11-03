#include <iostream>

using namespace std;

class Distance
{
private :
    int  feet;
    int inch;
    
public : 
    Distance()
    {
      feet = 0;
      inch = 0;
    }
    Distance(float f, float i)
    {
      feet = f;
      inch = i;
      
      if (inch >= 12)
        {
            feet = feet + (inch / 12);
            inch = inch % 12;
        }
    }
    
    Distance operator+(Distance d)
    {
     Distance result;
     result.feet = feet + d.feet;
     result.inch = inch + d.inch;
     
     if (result.inch >= 12)
     {
      result.feet = result.feet + (result.inch / 12);
      result.inch = result.inch % 12;
     }
    return result;
    }
    
    void display()
    {
        cout << feet << "'" << inch << "\"";
    }
};
int main()
{
  Distance d1(5, 8);
  Distance d2(3, 10);
  
  Distance d3 = d1 + d2;
  
  cout << "First distance: ";
  d1.display();
  cout << endl;
  
  cout << "Second distance: ";
  d2.display();
  cout << endl; 
  
  cout << "Sum of distances: ";
  d3.display();
  cout << endl;
  
  return 0;
}
