#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("enter the number");
scanf("%d",&year);
year%4==0?printf("leap year"):printf("not leap year");
getch();
}
