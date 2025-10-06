#include <iostream>
using namespace std


class student
{
private:
    static int totalstudent;
    int rollno;
    string name;
    
public:
Student(char n)
  {
  ++TotalStudent;
  }
-student()
  {
  --TotalStudent;
  }
  
    void setRollNo(int r)
  {
    Rollno=r;
  }
  
    void getRollNo()
  {
    return rollno;
  }
  
    void setName(char n)
  {
    Name=n;
  }
  
    void getName()
  {
    return name;
  }
};
int student::TotalStudents = 0

int main() {

    student1 = student()
    student1.setName("azad")
    student1.setRollNo(1)
    
    student2 = student()
    student2.setName("Harsh")
    student2.setRollNo(2)
    
}

