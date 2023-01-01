 #include <iostream>
#include <windows.h>
using namespace std;

void speedChallan(int speed);
main(){
 int speed;
 cout << "Speed limit: " ;
 cin >> speed;
 speedChallan(speed);

}

void speedChallan(int speed){
  if(speed >= 105){
     cout << "Halt... YOU WILL BE CHALLENGED!!!";
  }
  if(speed < 105 ){
   cout << "Perfect! You are going good.";
  }
}

