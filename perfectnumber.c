
main()
{
    int num,temp=0, sum=0;
    printf("Enter a Number");
    scanf("%d",&num);
    temp=num;
    for(int i=1; i<=num/2; i++ )
    {
        if(temp%i==0)
            sum=sum+i;
    }

    if(sum==temp)
        printf("The number is perfect");
    else
        printf("Number is not perfect");
}
