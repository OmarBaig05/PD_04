#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void calculateAggregate(string , float , float , float );
void compareMarks( string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);
main(){
  system ("cls");
  system ("color f0");
  string nameSTD1;
  int matricMarksSTD1;
  int interMarksSTD1;
  int ecatMarksSTD1;

  string nameSTD2;
  int matricMarksSTD2;
  int interMarksSTD2;
  int ecatMarksSTD2;

  printMenu();
  cout << "Your name: ";
  cin >> nameSTD1;
  cout << "Matric marks: ";
  cin >> matricMarksSTD1;
  cout << "Inter marks: ";
  cin >> interMarksSTD1;
  cout << "ECAT Marks: ";
  cin >> ecatMarksSTD1;
  calculateAggregate(nameSTD1 , matricMarksSTD1 , interMarksSTD1 , ecatMarksSTD1);

  cout << "Your name: ";
  cin >> nameSTD2;
  cout << "Matric marks: ";
  cin >> matricMarksSTD2;
  cout << "Inter marks: ";
  cin >> interMarksSTD2;
  cout << "ECAT Marks: ";
  cin >> ecatMarksSTD2;
  calculateAggregate(nameSTD2 , matricMarksSTD2 , interMarksSTD2 , ecatMarksSTD2);

  compareMarks( nameSTD1, ecatMarksSTD1,  nameSTD2, ecatMarksSTD2);
}
 

  

void printMenu(){

cout<<" *****************************************************                        "<<endl;
cout<<" *                                                   *                             "<<endl;
cout<<" *            UNIVERSITY ADMISSION                   *                             "<<endl;
cout<<" *              MANAGEMENT SYSTEM                    *                             "<<endl;
cout<<" *                                                   *                             "<<endl;
cout<<" *                                                   *                             "<<endl;
cout<<" *****************************************************                        "<<endl;
}

void calculateAggregate( string name  , float matricMarks  , float interMarks , float ecatMarks){
float aggregate = (matricMarks / 1100  * 0.3) + (interMarks / 550 * 0.3) + (ecatMarks / 400* 0.4);
aggregate = aggregate * 100;
cout << name << " your aggregate is: " << aggregate << endl;
}

void compareMarks( string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2){
 
 if (ecatMarksStd1 > ecatMarksStd2){
  cout << "Roll number 1 is assigned to: " << nameStd1; 
  }
 if (ecatMarksStd1 < ecatMarksStd2){
  cout << "Roll number 1 is assigned to: " << nameStd2; 
  }
}


// float aggregate = (matricMarks / 1100  * 0.3) + (interMarks / 550 * 0.3) + (ecatMarks / 400* 0.4);