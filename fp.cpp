#include <iostream>
using namespace std;
int main ()
{
int x[5]={100,2,3,4,5};
for (int i=0;i<5; i++)
cout << x[i] << " ";
cout<<endl;
char name[50]="my_name\0";
for (int c=0; name[c]!='\0'; c++)
cout << name[c];
cout <<endl;
cout << "Enter first name: ";
cin>> name;
for (int a=0; name[a]!='\0'; a++)
cout << name[a];
cout<<endl;
return 0;
}
