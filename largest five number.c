#include<stdio.h>
#include<conio.h>
void main()
{
int num1, num2, num3, num4, num5;
printf("enter Five Number: ");
scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
if(num1>num2&&num1>num3&&num1>num4&&num1>num5)
    printf("num 1 is greater");
else if(num2>num3&&num2>num4&&num2>num5)
    printf("num2 is grater");
else if(num3>num4&&num4>num5)
    printf("num3 is grater");
else if(num4>num5)
    printf("num4 is grater");
    else printf("num5 is greater");
 getch();
 }
