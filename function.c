#include<stdio.h>
#include<conio.h>
int count(int);
void main()
{
    int s,x,y;
    printf("enter the number");
    scanf("%d",&x);
s=count(x);
printf("%d",s);
getch();
}
int count(int r)
{
int count=0,l;
while(r)
{
l=r%10;
count=count+1;
r=r/10;
}
return(count);
}
