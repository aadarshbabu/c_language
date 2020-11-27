#include<stdio.h>
#include<conio.h>

struct student
{
    char name[50];
    float fee;
    int age; 
    

};


 struct student input()
  {
      
      struct student b;
      fflush(stdin);
      printf("\nenter a Name of student ");
      gets(b.name);
      fflush(stdin);
      printf(" \nenter a Fee of student ");
      scanf("%f",&b.fee);
       fflush(stdin);
      printf(" \nEnter a Age of student  ");
      scanf("%d",&b.age);
      return(b);
  }
 void display(struct student s)
  {
      printf("\n\nname of student %s \n Student fee %f \n Age of student %d",s.name,s.fee,s.age);
  }



int main()
{
    struct student s1,s2,s3;
    s1=input();
    s2=input();
    s3=input();
    display(s3);
    display(s1);
    display(s2);
    return(0);

}