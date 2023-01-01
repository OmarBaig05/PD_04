#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int , int);
void printA(int x, int y);
void printW(int x, int y);
void print2A(int x, int y);
void printI(int x, int y);
void printS(int x, int y);

main(){
 system ("cls");
 system ("color f0");
 int x = 50;
 int y = 25;
 printA(x , y);
 printW(x , y);
 print2A(x , y);
 printI(x , y);
 printS(x , y);
}


 void gotoxy(int x, int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  
 }

 void printA(int x, int y){
   gotoxy (x , y);
   Sleep(100);
   cout << "                 " << endl ;
   cout << "     AA          " << endl ;
   cout << "    A  A         " << endl ;
   cout << "   AAAAAA        " << endl ;
   cout << "  A      A       " << endl ;

 }
 void printW(int x, int y){
   gotoxy (x , y + 6);
   Sleep(100);
   cout << "                       " << endl ;
   cout << " W   W   W                " << endl ;
   cout << " W  W W  W                 " << endl ;
   cout << " W W   W W                 " << endl ;
   cout << " WW     WW                 " << endl ;
 }
 void print2A(int x, int y){
   gotoxy (x , y + 12);
   Sleep(100);
   cout << "                 " << endl ;
   cout << "     AA          " << endl ;
   cout << "    A  A         " << endl ;
   cout << "   AAAAAA        " << endl ;
   cout << "  A      A       " << endl ; }
 void printI(int x, int y){
   gotoxy (x , y + 18);
   Sleep(100);
   cout << "      " << endl ;
   cout << "     I    " << endl ;
   cout << "     I    " << endl ;
   cout << "     I    " << endl ;
   cout << "     I    " << endl ;
   cout << "     I    " << endl ;
 }
 void printS(int x, int y){
   gotoxy (x , y + 24);
   Sleep(100);
   cout << "               " << endl;
   cout << "   SSSSS         " << endl;
   cout << "  SS          " << endl;
   cout << "   SSSS         " << endl;
   cout << "      SS      " << endl;
   cout << "  SSSSS          " << endl;
 }