#include<stdio.h>
#include<string.h>
int main()
{
 int num;
 int *ptr;
//  int **ptre;
 printf("Enter a Number");
 scanf("%d",&num);
    ptr=num;
   //  ptre=ptr;
 printf("Use Fist Pointer Print Value %d\n",ptr);
//  printf("use Pointer to Pointer Print Value %d",ptre);
 
    return 0;
}