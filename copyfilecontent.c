#include<stdio.h>
#include<stdlib.h>
int main()
{
    char filename[40],ch;
    FILE *fp;
    FILE *fpt;
    printf("Enter a Reading file name");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Read File Not open");
        exit(1);
    }
printf("Enter a writing file name");
scanf("%s",filename);
    fpt=fopen(filename,"a");
    if(fpt==NULL)
    {
        printf("write file not open");
        exit(1);
    }

    ch=fgetc(fp);
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,fpt);

    }
    printf("File copy successfully");
    fclose(fp);
    fclose(fpt);
    

 
    return 0;
}