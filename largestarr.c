#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    int arr[100];
    printf("Enter a  Array ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        {
            printf("Enter a Array element %d\n",i);
            scanf("%d",&arr[i]);
        }

        for(i=0;i<=n;i++)
        {
           if( arr[0]<arr[i])
            arr[0]=arr[i];
        }
    printf("The larget Array is %d\n",arr[0]);

    for(i=0;i<=n;i++)
    {
        if(arr[0]>arr[i])
        arr[0]=arr[i];
    }
    printf("The smallest array Element is %d\n",arr[0]);
}

