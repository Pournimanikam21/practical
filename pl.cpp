#include<iostream>

using namespace std;

class Fraction 
{
  private :
     int n,d;
     
  public :
      Fraction()
      {
        n = 1; d =1 ;
      }
      Fraction(int num, int den)
      {
        n = num;
        d = den;
      }
      
      Fraction add(Fraction f)
      {
        Fraction result;
        result.n= (n * f.d)+(d * f.n);
        result.d= d * f.d;
        return result;
      }
      
      Fraction subtract(Fraction f)
      {
        Fraction result;
        result.n= (n * f.d) - (d * f.n);
        result.d= d * f.d;
        return result;
      }
      
      Fraction multiply(Fraction f)
      {
        Fraction result;
        result.n= n * f.n;
        result.d= d * f.d;
        return result;
      }
      
      Fraction divide(Fraction f)
      {
        Fraction result;
        result.n= n * f.d;
        result.d= d * f.n;
        return result;
      }
      void print()
      {
        cout << n << " / " << d;
      }
};
int main()
{
  Fraction f1(1, 2);
  Fraction f2(1, 4);
  Fraction result;
  
  cout << "Fraction 1: ";
  f1.print();
  cout << endl;
  
  cout << "Fraction 2: ";
  f2.print();
  cout << endl;
  
  result = f1.add(f2);
  cout << "Sum: ";
  result.print();
  cout << endl;
  
  result = f1.subtract(f2);
  cout << "Difference: ";
  result.print();
  cout << endl;
  
  result =f1.multiply(f2);
  cout << "Product: ";
  result.print();
  cout << endl;
  
  result = f1.divide(f2);
  cout << "Division: ";
  result.print();
  cout << endl;
  
  return 0;
}
  
  
  
  
  
  
  
  
  
  
  
