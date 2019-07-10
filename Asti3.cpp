#include<iostream>
using namespace std;
int sub (int a, int b)
{
 int c;
 c=a-b;
 return c;
}
int main()
{
 int x=6, y=7, z;
 z= sub (1,2);
 cout << "The first result is " << z << '\n';
 cout << "The second result is " << sub (1,2) << '\n';
 cout << "The third result is " << sub (x,y) << '\n';
 z= 10 + sub (x,y);
 cout << "The fourth result is " << z << '\n';
}
