#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    char arr1[100];
    printf("Enter a String");
    gets(arr);
    strcpy(arr1,arr);
    printf("copy String is %s",arr1);


 
    return 0;
}