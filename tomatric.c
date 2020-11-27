#include<stdio.h>
#include<conio.h>
     int main()
     {
         int arr[3][3];
         int trarrp[3][3];
         int i,j;
         printf("Enter a matrix");
         for(i=0;i<=2;i++)
         {
             for(j=0;j<=2;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
         }

         for(i=0;i<=2;i++)
         {
             for(j=0;j<=2;j++)
                {
                    trarrp[j][i]=arr[i][j];
                }
         }

         for(i=0;i<=2;i++)
         {
             for(j=0;j<=2;j++)
                {
                    printf("%d ",trarrp[i][j]);
                }
                printf("\n");
         }


     }