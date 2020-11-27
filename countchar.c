#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nl=0,ch=0,bl=0,tab=0;
    char che;
    FILE *fp;
    fp=fopen("data.txt","r");
    while((che=fgetc(fp))!=EOF)       
    {
       if(che==41)
        tab++;
       else if (che==10)
       {
           nl++;
       }
       else if (che==32)
       {
           bl++;
       }
       else
       {
           ch++;
       }
          
    }
    
printf("New Line %d: \n",nl);
printf("Tab Key %d: \n",tab);
printf("charector : %d \n",ch);
printf("Blank key %d: \n",bl);
 
    return 0;
}