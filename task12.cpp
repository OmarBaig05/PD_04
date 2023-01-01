 #include <iostream>
#include <windows.h>
using namespace std;

void totalBill(int redRose, int whiteRose , int tulip);
main(){

int numberOfRedRosses;
int numberOfWhiteRosses;
int numberOfTulips;

cout << "Number of Red Rosses: ";
cin  >> numberOfRedRosses;
cout << "Number of White Rosses: ";
cin  >> numberOfWhiteRosses;
cout << "Number of Tulips: ";
cin  >> numberOfTulips;
totalBill ( numberOfRedRosses , numberOfWhiteRosses , numberOfTulips);

}

void totalBill(int redRose, int whiteRose , int tulipNumber){
 int priceOfRed = redRose * 2;
 int priceOfWhite = whiteRose * 4.10;
 int tulips = tulipNumber * 2.50;

 int total =1+( priceOfRed + priceOfWhite + tulips );
 cout << "total price is: " << total <<endl;

 if (total > 200){
  float discount = (total - (total * 0.2))+1;
  cout << "Price after discount: " << discount;
 }
}

