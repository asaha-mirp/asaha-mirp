#include <iostream>
using namespace std;
int main()
{
int n, a, i, b;
cout << "Enter any number : " <<endl;
cin >> n;
while (i<n)
{
i++;
a=i;
cout << "The number is : " <<a <<endl;
b+=a;
}
 cout << "The sum upto " << n << " is : " << b <<endl;
return 0;
}
