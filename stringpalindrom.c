#include<stdio.h>
#include<string.h>
int main()
{
int i=0;int l;
 char arr[100];
 printf("Enter A String ..");
 gets(arr);
 l=strlen(arr);
  for(i=0;i<l/2;i++)
 {
     if(arr[i]!=arr[l-1-i])
        {
            printf("stering is not Palidron");
            break;
        }
 }

 if(i==l/2)
    printf("The Charector is palindrom");
 
    return 0;
}