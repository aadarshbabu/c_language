main()
{
    int num,i;
    printf("enter a Number");
    scanf("%d",&num);
    for(i=2; i<=num-1; i++)
        if(num%i==0)
            break;

        if(num==i)
            printf("The number is prime ");
        else
            printf("not prime       ");

}
