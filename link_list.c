#include <stdio.h>
#include <stdlib.h> 

struct stud {
    int r_no;
    float percentage;
    char name[20];
    struct stud *next; 
};
struct stud *st = NULL; 

void ins_st();
void ins_end();
void ins_before_data();
void display();

int main() {
    int ch;

    do {
        printf("Enter your choice 1.Insert at start, 2.Insert at end , 3.Insert before data , 4.Display, 0.Exit :");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                ins_st();
                break;
            case 2:
                ins_end();
                break;
            case 3:
                ins_before_data();
                break;
            case 4:
                display();
                break;
            case 0:
                return 0;
        }
    } while (1);
}

void ins_st()
{  
    struct stud *ptr_stud;
    ptr_stud = (struct stud *)malloc(sizeof(struct stud));  

    if (ptr_stud == NULL) 
    {
        printf("Memory Overflow\n");
        return;
    }

    printf("Enter Roll No, Name, Percentage: ");
    scanf("%d", &ptr_stud->r_no);
    scanf("%s", ptr_stud->name);  
    scanf("%f", &ptr_stud->percentage);  

    if (st == NULL) {
        st = ptr_stud;
        ptr_stud->next = NULL;
    } else {
        ptr_stud->next = st;
        st = ptr_stud;
    }
}
void ins_end()
{
    struct stud *t, *i;

    t = (struct stud*) malloc(sizeof(struct stud));
    if (t == NULL)
    {
        printf("Overflow\n");
        return;
    }

    printf("Enter Roll No, Name, Percentage: ");
    scanf("%d", &t->r_no);
    scanf("%s", t->name);
    scanf("%f", &t->percentage);

    t->next = NULL;

    if (st == NULL)
    {
        st = t;
    }
    else
    {
        i = st;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = t;
    }
}
void ins_before_data()
{
    if (st == NULL || st -> data == data)
    {
      ins_st();
      return ;
    }
    node *t = st;
    node *p;
    while (t -> data! = data )
    {
      p = t;
      t = t -> nxt;
      if (t == NULL)
      {
        print("No data");
        return 0;
      }   
    }
    new = (struct stud*)malloc (sizeof (struct node));
    
    new -> nxt = t;
    
}
void display() 
{
    struct stud *ptr_stud;
    ptr_stud = st;

    while (ptr_stud != NULL)
    { 
        printf("Student Roll No : %d\n", ptr_stud->r_no);
        printf("Student Percentage : %.f\n", ptr_stud->percentage); 
        printf("Student Name : %s\n\n", ptr_stud->name); 
        ptr_stud = ptr_stud->next;
    }
}

