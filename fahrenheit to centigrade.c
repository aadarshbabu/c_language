#include<conio.h>
#include<stdlib.h>
main()
{
    while(1)
    {
     float temp;
    float res,cint;
    system("CLS");
    printf("Enter a Temprature in fahrenhite:- ");
    scanf("%f",&temp);
    cint=temp-32;
    res=cint*5/9.0;
    printf(" %.1f fahernhite to centigrade %.4f",temp,res);
    getch();
    system("CLS");
    }
}
