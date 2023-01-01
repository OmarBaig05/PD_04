 #include <iostream>
#include <windows.h>
using namespace std;

void discount(string country , int price);
main(){

while(true){ 
 string country;
 int ticketPrice; 
 
  cout << "Country name: ";
  cin >> country;
  cout << "Ticket Price in dollars($): ";
  cin  >> ticketPrice;
  discount(country , ticketPrice);
 }

}


 void discount(string country , int price){
   if(country == "pakistan"){
     int discount = (price - (price * 0.05)) +1;
     cout << "Ticket price is: "<< discount << endl;
   
   }

   if(country == "ireland"){
     int discount = (price - (price * 0.1) )+1;
     cout << "Ticket price is: "<< discount << endl;
   
   }

   if(country ==" india"){
     int discount = (price - (price * 0.2)) +1;
     cout << "Ticket price is: "<< discount << endl;
   
   }

   if(country == "england"){
     int discount = (price - (price * 0.3))+1;
     cout << "Ticket price is: "<< discount << endl;
   
   }

   if(country == "canada"){
     int discount =( price - (price * 0.45))+1;
     cout << "Ticket price is: "<< discount << endl;
   
   }
 }