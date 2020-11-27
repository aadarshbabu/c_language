#include<stdio.h>
#include<conio.h>
     int main()
     {
         int arr[3][3];
         int trarrp[3][3];
         int rearr[3][3];
         int i,j;
 
 printf("Enter a First matrix\n");
         for(i=0;i<=2;i++)
         {
             for(j=0;j<=2;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
         }
         
 printf("Enter a second matrix\n");
         for(i=0;i<=2;i++)
         {
             for(j=0;j<=2;j++)
                {
                    scanf("%d",&trarrp[i][j]);
                }
         }

         for(i=0;i<=2;i++)
         {
             for(j=0;j<=2;j++)
                {
                    rearr[i][j]=arr[i][j]+trarrp[i][j];
                }

         }   

    for(i=0;i<=2;i++)
         {
             for(j=0;j<=2;j++)
                {
                    printf("%d ",rearr[i][j]);
                }
                printf("\n");
         }   
     }          