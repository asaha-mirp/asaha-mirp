#include <iostream>
using namespace std;
int main()
{
int num, sum, val;

cout << "Enter the number: " <<endl;
cin >> num ;

val=num ;

while (num!=0)
{
sum = sum + num%10;
num = num/10 ;
}
cout << "The sum of the digits of " << val << " is " << sum ;
 
return 0;
}
