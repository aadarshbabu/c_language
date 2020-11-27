#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

    int num1,num2,num3,choice;
    float div1,div2;
    while(1)
    {
         system("cls");
        printf("\n");
    printf("\nPress:- 1 addition");
    printf("\npress:- 2 Subtraction");
    printf("\npress:- 3 Multiplication");
    printf("\npress:- 4 Divide");
    printf("\npress:- 5 Exit the Program");

    printf("\nEnter A Choice");
    //scanf("%d",&choice);
    getch();
    switch(getch())
    //switch(choice)
    {
case '1':
    printf("Enter a Three Number");
          scanf("%d%d%d",&num1,&num2,&num3);
        printf(" \nThe is %d or %d or %d is %d ",num1,num2,num3,(num1+num2+num3));
        break;

    case '2':

        printf("\nEnter Two number");
        scanf("%d%d",&num1,&num2);
        printf("The Subtraction is %d - %d = %d",num1,num2,(num1-num2));
        break;

    case '3':

        printf("\nEnter Three Number");
        scanf("%d%d%d",&num1,&num2,&num3);
        printf("the Multipliction is %d * %d * %d = %d",num1,num2,num3,(num1*num2*num3));
        break;

    case '4':
        printf("\nEnter Two number ");
        scanf("%d%d",&num1,&num2);
        div1=num1;
        div2=div1/num2;
        printf("The divide is %d / %d = %f",num1,num2,div2);
        break;

    case '5':
        exit(0);
    //break;

    default:
      printf("Invalid Choice");

    }
getch();
    }
}
