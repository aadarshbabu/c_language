#include<stdio.h>
#include<conio.h>
void main()
{
int i,num;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("\n %d*%d is %d",i,num,i*num);
}
getch();
}
