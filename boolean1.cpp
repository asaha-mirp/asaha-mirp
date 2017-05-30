#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, max, secmax;

    cout << "Please enter number 1 :" <<endl;
    cin >> a;
    cout << "Please enter number 2 :" <<endl;
    cin >> b;
    cout << "Please enter number 3 :" <<endl;
    cin >> c;
    cout << "Please enter number 4 :" <<endl;
    cin >> d;
if ((a>b)&&(a>c)&&(a>d)){
   max=a;
if ((b>c)&&(b>d))
   secmax=b;   
if ((c>b)&&(c>d))
   secmax=c;   
if ((d>b)&&(d>c))
   secmax=d;   
cout << " The second greatest number is" << secmax <<endl;
}

if ((b>a)&&(b>c)&&(b>d)){
   max=b;
if ((a>c)&&(a>d))
   secmax=a;   
if ((c>a)&&(c>d))
   secmax=c;   
if ((d>c)&&(d>a))
   secmax=d;
cout << " The second greatest number is" << secmax <<endl;   
}

if ((c>a)&&(c>b)&&(c>d)){
   max=d;
if ((a>b)&&(a>d))
   secmax=a;   
if ((b>a)&&(b>d))
   secmax=b;   
if ((d>a)&&(d>b))
   secmax=d;   
}
cout << " The second greatest number is" << secmax <<endl;

if ((d>a)&&(d>b)&&(d>c)){
   max=d;
if ((a>b)&&(a>c))
   secmax=a;   
if ((b>c)&&(b>a))
   secmax=b;   
if ((c>b)&&(c>a))
   secmax=c;   
}
cout << " The second greatest number is" << secmax <<endl;
cout << " The Greatest number is " << max <<endl;

return 0;

}
