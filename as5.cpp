#include <iostream>

using namespace std;

class Student 
{
private:
   static int totalStudents;
   int rollno;
   string name;
   
public: 

   Student() {
       totalStudents++;
   }
   
   ~Student() {
       totalStudents--;
   }
   
   static int getTotalStudents() {
       return totalStudents;
   }
  
   void setRollNo(int r) {
       rollno = r; 
   }
   
   void setName(const string& n) {
       name = n;
   }
   
   int getRollNo() const {
       return rollno;
   }
   
   string getName() const {
       return name;
   }
};

// Fixed this line (added missing 's' at the end of totalStudents)
int Student::totalStudents = 0;

int main() {
    
    Student student1;
    student1.setName("XYZ");
    student1.setRollNo(1);

    Student student2;
    student2.setName("ABC");
    student2.setRollNo(2);

    cout << "Student 1: " << student1.getName() << ", Roll No: " << student1.getRollNo() << endl;
    cout << "Student 2: " << student2.getName() << ", Roll No: " << student2.getRollNo() << endl;

    cout << "Total Students: " << Student::getTotalStudents() << endl;

    return 0;

}

