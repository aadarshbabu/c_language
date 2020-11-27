#include<stdio.h>
#include<string.h>
int xstrcmp(char *,char *, int *);
int main()
{   
    int l,i=0;
    int input;
    printf(" Enter No of Charector in Word"); // Enter a no of charactor
    scanf("%d",&input);
    int ar[input];
    int *p;
    p=ar;
    char arr[input];
    char arr2[input];
    puts("Enter a First Word Without Space");
   scanf("%s",arr);
    puts("Enter a Anoter second word without space");
   scanf("%s",arr2);
    
    
    xstrcmp(arr,arr2,ar);

    while(*p!='E')
    {
        printf(" %c  or %c Index ASCII Value differences hear %d \n",arr[i],arr2[i], ar[i]);
       i++;
       p++;
       
    }
}
int xstrcmp(char *i , char *k,int *o)
{
    
    int m=0;
   
    
       while (*i)
        {
        m= *i-*k;
        i++;
        k++;
           if (m!=0)
            {
            // return(m);
            *o=m;
            o++;
            }
            else
            {
               *o=0;
                o++; 
            }
        
        }
        *o='E';
    
    
    
        
}      
    
    
   
   