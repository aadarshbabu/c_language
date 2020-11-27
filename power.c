#include<stdio.h>
#include<conio.h>
void main()
{
 long int i, num , power, res=1;
printf("enter the number and power");
scanf("%ld %ld",&num,&power);
for(i=1;i<=power;i++)
    res=res*num;

printf("power is %ld",res);
getch();
}


// 5 3...... 5*5*5
