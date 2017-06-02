#include <iostream>
using namespace std;
int main() 
{
int a[10], b=0, c=0, i;
for (i=0; i<10; i++)
{
 cout << "Enter a number: " <<endl;
cin >> a[i];

if (a[i]>=10)
{
b++;
}
else
{
c++;
}
}
cout << "Amount of numbers greater than or equal to 10: " << b <<endl;
cout << "Amount of numbers lesser than 10: " << c <<endl;
return 0;
}
