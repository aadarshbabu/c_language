#include<stdio.h>
#include<conio.h>

int main()
{
    int res[700];
    int i=0,j=0;
    int static roll=1;
    char choice;
    int start;
    int end;
    FILE *read=fopen("Data.txt","w");
        if(read==NULL)
            {
                printf("file not open");
            }

    for(i=0;i<700;i++)
        {
            res[i]=1000+roll;
            roll++;
        }

        lable:
        printf("You are Remove some Absent Roll_no Enter Y for Yes or N for NO");
        scanf("%c",&choice);

       if(choice=='Y'||choice=='y'){

       
        printf(" Enter a Start point rollno to remove your roll.");
        scanf ("%d",&start);
            fflush(stdin);
            printf("Enter a End point rol no to remove your roll");
            scanf("%d",&end);
            fflush(stdin);
            i=0;
            for(i=(start-1000); (i<end-1000); i++)
                {
                    res[i]=0;
                }
            goto lable;
       }
     

        else if (choice=='N'||choice=='n')
        {
            while(j<=700)
            {
                fprintf(read,"%d\n",res[j]); 
                // printf("%d\n",&res[j]);

                j++;
                
            }  
        }
        
         
    fclose(read);
    return 0;
}


