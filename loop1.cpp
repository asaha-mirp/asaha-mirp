#include <iostream>
using namespace std;
int main()
{
int n, a[50], i, s;
double av;

cout << "Enter the value of n : ";
cin >> n;
cout << "Enter the Different " << n << "   Values : " ;
for (i=0; i<n; i++ )
{
cin >> a[i];
}
s=0;
for (i=0; i<n; i++)
{
s= s+ a[i];
}
cout << "Sum of " << n << " Value is: " << s <<endl ;
av = s/n;
cout << "Average of " << n << " Values is : " <<av <<endl ;

return 0;
}
