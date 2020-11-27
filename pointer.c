#include<stdio.h>
int main()
{
    // basic of pointer ........
    // int *p, val,*l,a;
    
    // printf("Enter a number0");
    // scanf("%d",&val);
    // p= &val;
    // l = p;
    // printf("%d",l);

    // val=22;
    // a=val;
    // p=&val;
    // l=&val;
    // printf("%u %u ",p,l);
    // printf("%d %u",&val,&a);

    // swap two number program... without any value return....
    // void swap( int *p, int *q)
    // {
    //     int t;
    //     t=*p;
    //     *p=*q;
    //     *q=t;
    // }
    //     int x,y;
    //     printf("Enter a Two number");
    //     scanf("%d%d",&x,&y);
    //     printf("before swap number %d %d\n",x,y);
    //     swap(&x,&y);
    //     printf("after swap number %d %d ",x,y);
    // pointer ......subs
    int x,y,a;
        int *p,*q;
        x=10;
        y=20;
        p=&x;
        p=&y;
        a=p-q;
        printf("%u %u ",p,q);
        printf("%d ",a);


    return 0;
}