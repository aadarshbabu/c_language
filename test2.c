#include<stdio.h>
int main()
{
    int i,j,ar[4][4]={
                {1,2,3,4},
                {1,2,3,4},
                {1,2,3,4},
               {1,2,3,4} };
               for (i=0;i<4;i++)
               {
                   for(j=0;j<4; j++)
                    printf("%d ",*(*(ar+i)+j)); //== ar[i][j]

                    printf("\n");
               }
}