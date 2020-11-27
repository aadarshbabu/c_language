main()
{
int num,rev=0;
printf(" Enter the number");
scanf("%d",&num);
int r,temp=num;
while(num)
{
    r=num%10;
    rev=rev*10+r;
    num=num/10;

}
if(rev==temp)
    printf("number is palindrom");
else
    printf("Number is not palindrom");

}
