#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int logic(); // fuction Decleration...
 int static cheak=1; // This is temp variable use in Player No change.. player 1 of player 2...
static int z=0; // Input logic variable....
void draw(void); // function Decleration...
void input(void); // function Decleration...
char n[9]={'1','2','3','4','5','6','7','8','9',}; // Char Array.. to use position no of game...
int i,j;
char true; // user play again user Yes value store in true...
static int l=0;
static int c=0;

// this is main Function.. 

int main()
{   
    int y,i=0;
    char q ='1'; // char array.. use input the position array...
   
    lable:
    lab:
    system("cls");
    draw();
    input();
    y=logic();
    if(y!=11 && y!=10)
        {
            goto lable;

             printf("Game over");
        }
        // User Cheak Condition Win The Game or Not....
    else if (y==11)
    { 
        system("cls");
          draw();
        printf("\nPlayer 1 won the match\n\n");

        // User Say yes Game is Restarte

        printf(" If you want to Play Again Enter Y ");
        
        scanf("%c",&true);
        fflush(stdin);
        if(true=='y' || true=='Y')
        {

           for ( i=0; i<9; i++)
           {
               n[i]=q;
               q++;
               
           }
                z=0;
                q='1'; /*formal initalation. Bacause user input Again play The game Position in
                            invalid symbol input hear. q value will be change after game  */
                goto lab;
        }
    }
    else 
    {
        system("cls"); //means Clear privious input ....
        draw();
        printf("\nplayer 2 is won the match\n\n"); 

        printf(" If you want to Play Again Enter Y ");
         
        scanf("%c",&true);
        fflush(stdin);
        if(true=='y' || true=='Y')
        {   
            for(i=0;i<9;i++)
            {
                n[i]=q;
                q++;
                
            }
             z=0;   // Logic varible Will be zero Because You are input 9 Time position no...
             q='1'; // input a Charector In Array.. Q is a char Varible contain Positon no...
            goto lab;
        }
    }
    return 0;
}

// This function is Draw The Game Arcticture ... 
void draw()
{
            printf("\n\n");
         printf("\n\t\t\t Enter Only Valid position NO \n\n");

         printf("\n\t\t\t Tic Tac Tao Game \n\n");

    printf("\n\t\t\t ___________________________\n");
    printf("\n\t\t\t    %c     |  %c     |   %c   ",n[0],n[1],n[2]);
    printf("\n\t\t\t ___________________________\n");
    printf("\n\t\t\t    %c     |  %c     |   %c   ",n[3],n[4],n[5]);
    printf("\n\t\t\t ___________________________\n");
    printf("\n\t\t\t    %c     |  %c     |   %c   ", n[6],n[7],n[8]);
}

// User Input The Game Position No Position will be automaticly Fill in zero or Cross..
void input()
{
    int input;
    printf("\n\n\n player  %d  Enter a Position Number\n",cheak);
    scanf("%c",&input);
    fflush(stdin);
    if(cheak==2)
        cheak--;
    else  {cheak++;}    
    if(z!=8)
  {
      z++;
            for(i=0;i<=9;i++)
        {
        
                     if(c==0)
                        { 
                            if(input == n[i])
                            {
                             n[i]='x';
                                c++; 
                                break;  
                            }
                             
                         }

                    else if(c==1)
                    {
                            if(input==n[i])
                            {
                                n[i]='0';
                                c=0;
                                break;
                            }
         
      
                    }

        }

   
           
    }

    else
    // if Contion is False.. or if Your input 9 times of position no... 
                {  
                printf("game over");
                    exit(1);
                }


}
//cheak Position no of Game ...
// Main logic of game...


int logic()
{
     int l=0,m=1,p=2;
     int j,k=0,v=3,f=6;
  // Looop  etrite three times.. and every time cheak... All the posible.Row condation...
  // if (0 or 1 or 2 and 3 or 4 or 5 and 6 or 7 or 8 ) posible condation True.. Return. true...
    for(j=0;j<3;j++)
        {
            
            if(n[l]=='x' && n[m]=='x' && n[p]=='x') 
            {
                    return 11;
                    break;
            }
            if(n[l]=='0' && n[m]=='0' && n[p]=='0')
            {
                    return 10;
                    break;
            }
           
           p++;
           l=p;
           p++;
           m=p;
           p++;
           p=p;
        // Loop contain another Variable.. and cheak Coloun Condation.....
        // if (0 or 3 or 6 and 1 or 4 or 7 and 2 or 5 or 8 ). return true.. X or Zero..
            if(n[k]=='x' && n[v]=='x' && n[f] =='x' ){
            return 11;
            break;
            }
            if(n[k]=='0' && n[v]=='0' && n[f] =='0' ){
            return 10;
            break;
            }

         k++;
         v++;
         f++;

        }
    
        // this logic is cheak Dignal element ...
        // it zero or cross is present in Dignal position Condition Return true...
        // for ex (o or 4 or 8 and 2 or 4 or 6) contation zero or cross return True...

        if (n[0]=='x' && n[4]=='x' && n[8]=='x')
         {
             return 11;
         }
         if (n[2]=='x' && n[4]=='x' && n[6]=='x')
            return 11;

          if (n[0]=='0' && n[4]=='0' && n[8]=='0')
         {
            return 10;
         }

            if (n[2]=='0' && n[4]=='0' && n[6]=='0')
            return 10;

}