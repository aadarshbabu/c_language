#include<stdio.h>

int swap(int *r, int *l)
{
    int temp;
    temp=*r;
    *r=*l;
    *l=temp;



}





int main()
{
    int num, num1;
printf("Enter A Two Number");
scanf("%d%d",&num,&num1);
printf("Before swap number %d %d\n",num,num1);
swap(&num,&num1);
 printf("\n After swap Number %d %d",num,num1);
    return 0;
}