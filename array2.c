#include<stdio.h>
void main()
{
int a[4][3],b[4][3],c[4][3],i,j;
printf("enter twelve number for first matrix");
for(i=0;i<=3;i++)
 for(j=0;j<=2;j++)
 scanf("%d",&a[i][j]);

  printf("enter twelve number for second matrix");
for(i=0;i<=3;i++)
 for(j=0;j<=2;j++)
 scanf("%d",&b[i][j]);

 for(i=0;i<=3;i++)
 {
 for(j=0;j<=2;j++)
 {
 c[i][j]=a[i][j]+b[i][j];
 printf("%d",c[i][j]);
 }
 printf("\n");
 }
 }

