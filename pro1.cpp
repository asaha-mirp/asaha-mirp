#include<iostream>
using namespace std;
int main()
{
 int n, a, b;
cout << "Enter the number of rows you want : " <<endl;
cin >> n;
for (a=0; a<n; a++)
{
for (b=0; b<=a; b++)
{
cout << "*";
}
cout <<endl;
}
return 0;
}
