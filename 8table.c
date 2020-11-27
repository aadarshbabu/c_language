#include<stdio.h>
#include<conio.h>
void main()
{
int s,c;
printf("enter the cp and sp");
scanf("%d%d",&s,&c);
if(s==c)
    printf("your selling prise no profit no loss");
else{
if(s>c)
    printf("\n Loss is %d",c-s);
else
    printf("\n Profit is %d",c-s);

getch();
}
}
