#include <iostream>
using namespace std;
int main () {
int a, b, c, d;
 
 cout << "Enter the cutoff marks for the grades: \n ";
 cin >> a >> b >> c;
 
 if((a>b)&&(b>c))
 cout << "Your cutoff marks for the grade are as follows: \n";
  else
 cout << "Your cutoff marks for the grades are not valid! \n";

 cout << "Enter your marks: \n";
 cin >> d;

 if (d>=a){
 cout << "Your grade is A !! \n";
}
 else if (d>=b){
 cout << "Your grade is B ! \n";
 }
 else if (d>=c){
 cout << "Your grade is C . \n";
}
 else if (d<c){
 cout << "Your grade is D . \n";
}

   return 0;
}
 
  
