#include<stdio.h>
#include<conio.h>

struct student
{
    char name[50];
    int rollno;
    char cource[20]; 
    

};


 struct student input()
  {
      
      struct student b;
      fflush(stdin);
      printf("\nenter a Name of student ");
      gets(b.name);
      fflush(stdin);
      printf(" \nenter a Rollno of student ");
      scanf("%d",&b.rollno);
       fflush(stdin);
      printf(" \nEnter a cource of cource ");
      gets(b.cource);
      return(b);
  }
 void display(struct student s)
  {
      printf("\n\nname of student %s \n Student rolln %d \n cource of student %s",s.name,s.rollno,s.cource);
  }



int main()
{
    struct student s1,s2,s3,s4,s5;
    s1=input();
    s2=input();
    s3=input();
    s4=input();
    s5=input();
    display(s1);
    display(s1);
    display(s2);
    display(s3);
    display(s4);
    display(s5);
    return(0);

}