#include<stdio.h>
int main()
{
    int l=0,i;
    char *p;
    char arr[]={"aadarsh"};
    p=arr;
  for ( i = 0;*p!='\0'; i++)
  {
     l++;
    p++;
  }
  
   
    printf("%d",l);
}