#include<stdio.h>
void main()
{

int ld,fd,yr;
long nd,td;
printf("Enter Year: ");
scanf("%d",&yr);
nd=(yr-1)*365;
ld=(yr-1)/4-(yr-1)/100+(yr-1)/400;
td=nd+ld;
fd=td%7;
switch(fd)
{


 case 0: printf("Monday");
    break;

  case 1: printf("Tueaday  ");
    break;

    case 2: printf("wednesday");
    break;

    case 3: printf("thrusday    ");
    break;

    case 4: printf("friday  ");
    break;

    case 5: printf("satarday    ");
    break;

    case 6: printf("sunday");
    break;

    case 7: printf("Monday");
    break;

}

}
