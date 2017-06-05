#include <iostream>
using namespace std;
int main()
{
int n, i=1, a=1;
cout << "Enter any number: \n";
cin >> n;
for (i=0; i<n; i++)
{
    a*=(n-i);
}
cout << "The factorial of the number is: " << a <<endl;
return 0;
}
