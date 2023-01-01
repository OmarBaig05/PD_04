#include <iostream>
#include <windows.h>
using namespace std;

void reverse(string word1);
main(){
  system ("cls");
  string word1;

  cout << "Word 1: " ;
  cin >> word1;
  reverse(word1);

}

void reverse(string word1){
  if (word1 == "true" ){
     cout << "False";
  }
  if (word1 == "false" ){
     cout << "True";
  }


}