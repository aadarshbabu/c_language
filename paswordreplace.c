#include<stdio.h>
#include<string.h>
char replace(char s)
{
    if(s=='l'||s=='L')
        return('|');
    if(s=='A'||s=='a')
        return('@');
    if(s=='o'||s=='O')
        return('0');
    if(s=='S'||s=='s')
        return('$');
    if(s=='q'||s=='Q')
        return('?');    
}       
    
int main()
{
    int i;
    char arr[100];
    printf("Enter A pasword \n");
    scanf("%s",&arr);
    for(i=0;i<=strlen(arr);i++)
    {
        arr[i]=replace(arr[i]);
    }

    printf("\nyour Strong pasword is %s",arr);

   
    return 0;
}