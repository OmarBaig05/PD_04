#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int , int);
void maze();
void move(int x , int y);
main(){
  system ("cls");
  system ("color f0");
  maze();

  int x  = 4;
  int y = 3;

  while(true){
   move(x , y);
   if(y < 9){
      y = y + 1;
   }
    if(y >= 9){
      gotoxy(x , y + 1);
      cout << " ";
      gotoxy(x , y);
      cout << " ";
      y = 3;
   }
  }


}

void maze(){
  cout << "#########################"<<endl; 
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#                       #"<<endl;
  cout << "#########################"<<endl;
}

void gotoxy(int x, int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  
}

void move(int x , int y){
   gotoxy(x , y + 1);
   cout << "P";
   gotoxy (x , y);
   cout << " ";
   Sleep(200);
}