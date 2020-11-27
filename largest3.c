#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is largest no");
if(b>a && b>c)
printf("b is largest no");
if(c>a && c>b)
printf("c is largest no");
getch();
}
