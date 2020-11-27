#include<stdio.h>
int cube(int a)
{
    return (6*a*a);
}



int main()
{
    //area of cube 6a2;
    int ans;
    int a;
    printf("Enter a Angle");
    scanf("%d",&a);
    ans=cube(a);
    printf("The area of cube is %d",ans);
    return 0;
}