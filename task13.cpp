 #include <iostream>
#include <windows.h>
using namespace std;

void workingDays(int holiday);
main(){

int holidays;


cout << "Number of holidays: " ;
cin >> holidays;
workingDays(holidays);

}

void workingDays(int holidays){
  
int workingDays = 365 - holidays;
int playTimeInYear = (workingDays * 63) + (holidays * 127);
    cout << "Total playtime in year is: " << playTimeInYear << endl;
int difference = 30000 - playTimeInYear ;
if (playTimeInYear < 30000 ){
    cout << "Tom sleeps well"<< endl;
    int hours = difference / 60 ;
    int minutes = difference % 60;
    cout << hours << " hours and " << minutes << " minutes less for play" << endl;
}
if (playTimeInYear > 30000  ){
    difference = (-1) * difference;
    cout << "Tom will run away"<< endl;
    int hours = difference / 60 ;
    int minutes = difference % 60;
    cout << hours << " hours and " << minutes << " minutes less for play" << endl;
}



}