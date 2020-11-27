#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,choice;
printf("\n1 addition");
printf("\n2 subtraction");
printf("\n3 multiplecation");
printf("\n4 devision");
printf("choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
  printf("enter the number");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("%d",c);
    break;
case 2:
  printf("enter the number");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("%d",c);
    break;
case 3:
  printf("enter the number");
  scanf("%d%d",&a,&b);
  c=a*b;
  printf("%d",c);
    break;
case 4:
  printf("enter the number");
  scanf("%d%d",&a,&b);
  c=a/b;
  printf("%d",c);
    break;
default:
  printf("invalid number");
}
getch();
}
