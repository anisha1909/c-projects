#include<iostream.h>
#include<conio.h>
#include<process.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};

int checkwin()
{
 if(square[1]==square[2]&&square[2]==square[3])
 {
  return 1;
 }
 else if(square[4]==square[5]&&square[5]==square[6])
 {
  return 1;
 }
 else if(square[7]==square[8]&&square[8]==square[9])
 {
  return 1;
 }
 else if(square[1]==square[4]&&square[4]==square[7])
 {
  return 1;
 }
 else if(square[2]==square[5]&&square[5]==square[8])
 {
  return 1;
 }
 else if(square[3]==square[6]&&square[6]==square[9])
 {
  return 1;
 }
 else if(square[1]==square[5]&&square[5]==square[9])
 {
  return 1;
 }
 else if(square[3]==square[5]&&square[5]==square[9])
 {
  return 1;
 }
 else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
 {
  return 0;
 }
 else if(1==1)
 {
 return -1;
 }
 else
 {
  return -1;
 }
}

void display()
{
 cout<<"\n\nTIC TAC TOE GAME"<<endl;
 cout<<"player 1(x)-player2(o)"<<endl<<endl;
 cout<<endl;

 cout<<"   |     |"<<endl;
 cout<<" "<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<endl;
 cout<<"___|_____|"<<endl;
 cout<<"   |     |"<<endl;
 cout<<" "<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<endl;
 cout<<"___|_____|"<<endl;
 cout<<"   |     |"<<endl;
 cout<<" "<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<endl;
 cout<< " _|     |"<<endl;
 }
 void main()
 {
  int player=1,i,choice,e,s=0;
  char mark;

  do
  {
   display();
   player=(player%2)?1:2;
   cout<<"player"<<player<<"enter the number:";
   cin>>choice;

   mark=(player==1)?'x':'o';

   if(choice==1&&square[1]=='1')
   {
    square[1]=mark;
   }
   else if(choice==2&&square[2]=='2')
   {
    square[2]=mark;
   }
   else if(choice==3&&square[3]=='3')
   {
    square[3]=mark;
   }
   else if(choice==4&&square[4]=='4')
   {
    square[4]=mark;
   }
   else if(choice==5&&square[5]=='5')
   {
    square[5]=mark;
   }
   else if(choice==6&&square[6]=='6')
   {
    square[6]=mark;
   }
   else if(choice==7&&square[7]=='7')
   {
    square[7]=mark;
   }
   else if(choice==8&&square[8]=='8')
   {
    square[8]=mark;
   }
   else if(choice==9&&square[9]=='9')
   {
    square[9]=mark;
   }
   else if(choice=='e')
   {
    s=-1;
   }
   else
   {
    cout<<"invalid move!";


    player--;
    cin.ignore();
    cin.get();
   }
   i=checkwin();
   if(s==-1)
   {
    i=-1;
   }
   player++;
  }
  while(i==-1);
  display();
  if(i==1)
  {
   cout<<"\aCONGRATULATIONS!PLAYER"<<--player<<"WINS!";
  }
  else
  {
   cout<<"\aGAME DRAW!";
  }
  cin.ignore();
  cin.get();
  getch();
 }