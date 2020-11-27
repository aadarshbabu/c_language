#include<stdio.h>
#include<conio.h>
void main()
{
int i,num;
printf("enter the number");
scanf("%d",&num);
for(i=2; i<=num-1; i++)
    if(num%i==0) //prime hone ke liye ye jaruri hai ki number apne se ek chota ke kisi se divide n ho....
        break;

if(num==i)
{
printf("num is prime");
}
else
{
printf("num is not prime");
}

getch();
}
//getch();

