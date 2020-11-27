#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("enter the number");
scanf("%d",&num);
switch(num%2)
{
case 0:
    printf("num is even");
     break;
case 1:
    printf("num is odd");
     break;
default:
    printf("invalid number");
}
    getch();
    }
