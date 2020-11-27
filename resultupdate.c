#include<stdio.h>
int main()
{
    int res[700];
    int i=0,j=0;
    int start;
    int end;
    // FILE *read=fopen("Data.txt","w");
    //     if(read==NULL)
    //         {
    //             printf("file not open");
    //         }

    for (i=1;i<700;i++)
        {
            res[i]=1000+i;
        }
        printf("%d",res[699]);
       printf(" Enter a Start point rollno to remove your roll.");
       scanf ("%d",&start);
        fflush(stdin);
        printf("Enter a End point rol no to remove your roll");
        scanf("%d",&end);
        fflush(stdin);
        for(i=start; i<=end; i++)
            {
                res[i]=0;
            }
        while(i<=700)
        {
            // fprintf(read,"%c\n",res[j]); 
            printf("%d\n",res[i]);

            i++;
            
        }    
    // fclose(read);
    return 0;
}