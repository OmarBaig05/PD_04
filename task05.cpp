#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int , int);
void moveName(int , int);
main(){
 system ("cls");
 system ("color f0");
 
 int x = 50;
 int y = 25;
 moveName (x , y);
 

}


 void gotoxy(int x, int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
  
 }

 void moveName(int x , int y){
   gotoxy (x , y);
   Sleep(100);
   cout << "                                                                  " << endl;
   cout << "      ######   ##    ##     ##     ######                    "<< endl;
   cout << "     #      #  # #  # #    #  #    #    #               "<< endl;
   cout << "     #      #  #  ##  #   ######   ######            "<< endl;
   cout << "     #      #  #      #  #      #  #    #           "<< endl;
   cout << "      ######   #      # #        # #     #       "<< endl;
 }