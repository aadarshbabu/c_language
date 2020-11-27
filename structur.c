#include<stdio.h>
#include<conio.h>
struct student input();
void showstu(struct student );
static int count=1;

struct student
{
    int rollno;
    int D;
    int M;
    int y;
    char name[30];
    float marks;
    int division;
    
};


struct student input()
{
    struct student var;
    printf("\nEnter A  Student %d Roll No: ",count);
    scanf("%d",&var.rollno);
    fflush(stdin);
    printf("Enter A Student %d Date of Birth saprate By . : ",count);
    scanf("%d.%d.%d",&var.D,&var.M,&var.y);
    fflush(stdin);
    printf("Enter A Student %d Student Name: ",count);
    gets(var.name);
    fflush(stdin);
    printf("Enter a Student %d Marks : ",count);
    scanf("%f",&var.marks);
    var.division = (var.marks/5);
    count++;
    return (var);

}


void showstu(struct student s )
{
 
    printf("\n%d Student Details\n\n",count);
    printf("Rollno : %d \n",s.rollno);
    printf("Student Date of Birth : %d.%d.%d \n",s.D,s.M,s.y);
    printf("Student Name %s \n",s.name);
    count++;
    if(s.division < 35)
        printf("Fail\n");
    else if (s.division >= 35 && s.division <= 50 )  
        printf("Third Division\n");
    else if (s.division >= 50 && s.division <= 70)
        printf("Second Dividion\n");
    else 
        printf("first Division\n");

}
int main()
{
    struct student s1,s2,s3,s4,s5;//

    s1=input();
    s2=input();
    count=1;
    s3=input();
    s4=input();
    s5=input();

    showstu(s1);
    showstu(s2);
    showstu(s3);
    showstu(s4);  
    showstu(s5);      


    return(0);

}