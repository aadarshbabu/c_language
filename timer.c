#include<stdio.h>

int main()
{
     int hour=0, min=0,sec=0,mil=10000, i=0;
     while (i<=mil)
     {
         mil--;
        if(mil==0) 
        {
            sec++;
            mil=10000;
            if(sec>=60)
                {
                    min++;
                    sec=0;
                    
                
                     if(min>=60)
                    {
                        hour++;
                        min=0;

                    }
                }
        } 
    printf("%d:%d:%d:%d\n",hour,min,sec,mil);
     }
            
 
    return 0;
}
