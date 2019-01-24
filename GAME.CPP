
#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
char sym;
void game()
{
  printf("\n\t\t\t\t TIC- TAC -TOE\n");
}
void show()
{
   printf("\n\n\t\t\t\t---|---|---\n");
    printf("\t\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
   printf("\t\t\t\t---|---|---\n");
    printf("\t\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
    printf("\t\t\t\t---|---|---\n");
     printf("\t\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
     printf("\t\t\t\t---|---|---\n");
}
void player()
{
  printf("\tPlayer 1: 'X'\n");
   printf("\tPlayer 2: '0'\n");

}

void start()
{
     char pa;
   printf("\nEnter player who want to start :Player 1 or Player 2\n");
   scanf("%c",&pa);
}

void check(char P,char S)
{
    for(int i=0;i<=8;i++)
    {
       if(a[i]==P)
       {
	  a[i]=S;
       }
    }

}
void play()
{

   printf("\nEnter the position and Symbol for the Player :\n");
   char p,s;
      fflush(stdin);
   scanf("%c",&p);
   fflush(stdin);
   scanf("%c",&s);
   check(p,s);
}
int  end()
{
   if(a[0]=='x'&&a[1]=='x'&&a[2]=='x'||a[0]=='x'&&a[3]=='x'&&a[6]=='x'||a[2]=='x'&&a[5]=='x'&&a[8]=='x')
   return(100);
   else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x'||a[3]=='x'&&a[4]=='x'&&a[5]=='x'||a[6]=='x'&&a[7]=='x'&&a[8]=='x')
   return 100;
   else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x'||a[2]=='x'&&a[4]=='x'&&a[6]=='x')
   return 100;

   if(a[0]=='o'&&a[1]=='o'&&a[2]=='o'||a[0]=='o'&&a[3]=='o'&&a[6]=='o'||a[2]=='o'&&a[5]=='o'&&a[8]=='o')
   return(200);
   else if(a[1]=='o'&&a[4]=='o'&&a[7]=='o'||a[3]=='o'&&a[4]=='o'&&a[5]=='o'||a[6]=='o'&&a[7]=='o'&&a[8]=='o')
   return 200;
   else if(a[0]=='o'&&a[4]=='o'&&a[8]=='o'||a[2]=='o'&&a[4]=='o'&&a[6]=='o')
   return 200;
   else
   return 300;
}


void main()
{
clrscr();
game();
show();
player();

start();
play();
clrscr();
show();
play();
show();
int k=end();
if(k==100)
{
printf("\nPlayer 1 won\n");

}
else if(k==200)
{
printf("\nPlayer 2 won\n");
}
else
{
printf("\nDraw\n");
}



getch();
}