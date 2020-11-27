#include<stdio.h>
#include<conio.h>
        int main()
        {
            int num=1;
            int i=2,ans=0;

            while(ans<50)
            {
                ans=num*i;
                printf("Even NO is %d \n",ans);
                i+=2;
            }
            return (0);
        }