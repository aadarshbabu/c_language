#include<stdio.h>
#include<string.h>
void swap(char *p, char *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void parmutation(char *s, int i, int n){
    static int count;
    int j;
    if(i==n){
        count++;
        printf("%d %s ",count,s);
    }
    else
    {
        for(j=i;j<=n;j++){
            swap((s+i),(s+j));
            parmutation(s,i+1,n);
            swap((s+i),(s+j));// Backtracking
        }
    }
    
}

int main()
{
   char str[20];
   printf("Enter A string");
   gets(str);
   parmutation(str,0,strlen(str)-1); 

 
    return 0;
}