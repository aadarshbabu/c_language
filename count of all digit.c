main()
{
 int input,res=0;
 printf("Enter a Input");
 scanf("%d",&input);
 while(input)
 {
  res=res+1;
  input=input/10;
 }
 printf("You are Enter a %d number",res);
}
