#include<stdio.h>
int main()
{
int i,num,r,sum;

for(i=1;i<=1000;i++)
    {
    num=i;
    sum=0;
    while(num!=0)
        {
        r=num%10;
        sum=sum+r*r*r;
        num=num/10;
        }

    if(sum==i){
        printf("The number is armstrom %d\n",i);    

        }    
    }
}