main()
{
int num,r,sum=0;
printf("Enter a number");
scanf("%d",&num);
while (num)
{
r=num%10;
sum=sum+r;
num=num/10;
}
printf("The sum is %d", sum);
}
