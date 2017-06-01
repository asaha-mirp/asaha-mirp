#include<iostream>
using namespace std;
int main()
{
int n, a, b, c=1, d;
cout <<"Enter the number of rows : " <<endl;
cin >> n;
d=0;
for (b=0; b<n; b++)
{
for (a=b; a<n; a++)
{
cout << "* ";
}
d++;
for (c=1; c<=(b+1); c++)
{
cout << d <<" ";
}
cout <<endl;
}
return 0;
}
