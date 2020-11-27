#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f;
printf("enter the number of a before swapping");
scanf("%d",&a);
printf("enter the number of b before swapping");
scanf("%d",&b);
printf("enter the number of d before swapping");
scanf("%d",&d);
printf("enter the number of e before swapping");
scanf("%d",&e);
{
c=a;
a=b;
b=c;
f=d;
d=e;
e=f;
}
printf("\n after swapping a=%d",a);
printf("\n after swapping b=%d",b);
printf("\n after swapping d=%d",d);
printf("\n after swapping e=%d",e);
getch();
}
