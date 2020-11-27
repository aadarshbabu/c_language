int str(char *); //
#include<stdio.h>

int main()
{
    char a[10000];
    printf("Enter a String Without space");
    gets(a);
    int len=0;
    len= str(a);
    printf(" The string length is %d",len);
        return 0;
}

int str(char *s)
{

    int len=0;
    while (*s!='\0')
     {
       
        len++;
        s++;
        
    }
    return (len);
}