#include<stdio.h>
int main()
{   
    int hard;
    float cor,ten;
    printf("enter Hardness. Corban content. tensile....");
    scanf("%d%f%f",&hard,&cor,&ten);
    
     if(hard>50&&cor<0.7&&ten>5600)
        {printf("Your carben is gread 10");}

    else if (hard>50&&cor<0.7)
    {
        printf("Your carben is gread 9");
    }
     else if (cor<0.7&&ten>5600)
     {
         /* code */
         printf("your corbane is gread 8");

     }
        else if (hard>50&&ten>5600)
        {
            /* code */
            printf("your corban is gread 7");

        }
        else if (hard>49)
        {
            /* code */
            printf("your carbon is gread 6");

        }
        else
        {
            printf("your carbon is gread 5");

        }
             
return 0;
}