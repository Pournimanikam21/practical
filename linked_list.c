#include<stdio.h>
#include<stdlib.h>

struct stud {
  int r_no;
  float percentage;
  char name[20];
  struct stud*nxt;
  };
  struct stud*st;

void insert();
void display();

int main(){
  struct stud*ptr_stud;
  int ch;
  
  do{
    printf("Enter your choice 1.Insert, 2.Display, 0.Exit :");
    scanf("%d",&ch);
    
    switch (ch)
    {
     case 1:
       insert();
       break;
     case 2:
       display();
       break;
     case 0:
       return 0;
    }
  } 
  while(1);
}
void insert();
{
  struct stud*ptr_stud;
  ptr_stud = (struct stud*)malloc(size of (struct stud));
   if ( ptr_stud == NULL )
   {
    printf("Memory Overflow\n");
    return ;
    
   }
   printf("Enter Roll No, Name, Percentage");
   scanf("%d",&ptr_stud -> r_no);
   scanf("%s",&ptr_stud -> name);
   scanf("%s",&ptr_stud -> percentage);
   
   if (st == NULL)
   {
    st = ptr_stud;
    ptr_stud -> next = NULL;
   }
   else 
   {
    ptr_stud -> next = st;
    st = ptr_stud;
   }
}
void display()
{
  struct stud*ptr_stud;
  ptr_stud = st ;
  
  while ( ptr_stud! = NULL)
  {
   printf("Student Roll No : %d\n", ptr_stud->r_no);
   printf("Student Percentage : %d=f\n%s\n\n",ptr_stud->per, ptr_stud ->name);
   ptr_stud = ptr_stud->next;
  }
}
   
    







