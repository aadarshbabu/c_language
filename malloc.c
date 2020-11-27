#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,  i,*p,avg,sum=0;
    printf("Enter a No of student ");
    scanf("%d",&n);
    p =  malloc(n* sizeof(int));

    if(p==NULL)
    {
        printf("Memory Allocation undifined");
    }
    else
    {
        for(i=0; i < n; i++)
        {
            scanf("%d",(p+i));
            fflush (stdin);
        }
        for ( i = 0; i < n; i++)
        {
          sum=sum + *(p+i);
        }
        avg=sum/n;
        printf("The Result in  AVG .... %d",avg);
        
    }
    
}