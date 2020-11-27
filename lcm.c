#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter two number");
scanf("%d%d",&a,&b);
for(c=1; c<=a*b; c++)
{
if(c%a==0 && c%b==0)
    break;
}
printf("\n l.c.m is %d",c);
getch();
}
