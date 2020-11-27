#include<stdio.h>
#include<conio.h>
void main()
{
int res;
  printf("enter the number");
  scanf("%d",&res);
if(res>=70)
  printf("res is 1st devision %d",res);
if(res>=40 && res<70)
  printf("res is 2nd devision %d",res);
if(res>=30 && res<40)
  printf("res is 3rd devision %d",res);
if(res<30)
  printf("res is fail %d",res);
  getch();
  }
