#include<stdio.h>
int main()
{
    int ch;
    printf("Enter A Char ");
    ch=getchar();
    printf("the %d",ch);

    if(ch >= 48 && ch <=57)
    {
        printf("Enter Charector is Number");
    }
     if(ch >=65 && ch <=90)
    {
       printf("Enter chaexctor is Captial Alphabets ");
    }
        
     if(ch >= 97 && ch <= 122)
    {
        printf("Enter Charector is Small alphabets");

     };''
    else
    {
            printf("Enter charector is Symbol");
    }
    

    return 0;
}