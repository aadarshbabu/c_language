#include<stdio.h>
void main()
{
int i,j,a[3][3],b[3][3],c[3][3];
printf("enter nine numbers for first matrix");
for(i=0;i<=2;i++)
 for(j=0;j<=2;j++)
 scanf("%d",&a[i][j]);

printf("enter nine numbers for second matrix");
for(i=0;i<=2;i++)
 for(j=0;j<=2;j++)
    scanf("%d",&b[i][j]);


 for(i=0;i<=2;i++)
 {
    for(j=0;j<=2;j++)
  {
  c[i][j]=a[i][j]+b[i][j];
  printf("%d ",c[i][j]);
  }
  printf("\n");
  }
  }