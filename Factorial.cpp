#include <iostream>
using namespace std;
int main()
{
<<<<<<< HEAD
long n;  
long a=1;
cout << "Enter any number: \n";
cin >> n;
for (long i=0; i<n; i++)
{
a*=(n-i);
cout << "a: " << a <<endl;
cout << "n-i: " << n-i <<endl;
=======
int n, i=1, a=1;
cout << "Enter any number: \n";
cin >> n;
for (i=0; i<n; i++)
{
    a*=(n-i);
>>>>>>> 3956aa93d8ac7358b638d86507d64e12ff7433a5
}
cout << "The factorial of the number is: " << a <<endl;
return 0;
}
