#include<stdio.h>
#include<conio.h>
int fact(int);
int fact(int x)
{
    int ans=1;

    if (x==0)
    {
        return 1;
    }

               return (ans=x*fact(x-1));
    

    
}



int main()
{
    int res;
res=fact(6);
printf("%d",res);



}