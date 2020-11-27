#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("no a & b is before swapping");
scanf("%d%d",&a,&b);
{
a=a+b;
b=a-b;
a=a-b;
}
printf("\n after swapping a=%d",a);
printf("\n after swapping b=%d",b);
getch();
}
