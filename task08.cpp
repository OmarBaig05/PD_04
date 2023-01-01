#include <iostream>
#include <windows.h>
using namespace std;

void equalnotEqual(int number1 , int number2);
main(){
  system ("cls");
  int number1;
  int number2;
  
  cout << "Enter number: " ;
  cin >> number1;
  cout << "Enter number: " ;
  cin >> number2;
  equalnotEqual(number1 , number2);

}


void equalnotEqual(int number1 , int number2){
  if ( number1 == number2 ) {
   cout << "TRUE"<< endl ;
   }
  if ( number1 != number2 ) {
   cout << "FALSE"<< endl ;
   }
}