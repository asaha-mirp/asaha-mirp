#include<iostream>
using namespace std;
int main()
{
int  a, b, c, rows;
cout << "Enter the number of rows: " <<endl;
cin >> rows;
for (a=1; a<=rows; a++)
{
for (b=1; b<=4; b++)
{
cout << "* ";
}
b=1;
cout <<endl;
for (c=1; c<=3; c++)
{
cout << "* ";
}
cout <<endl;
}
return 0;
}
