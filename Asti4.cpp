#include<iostream>
using namespace std;
class Box
{
public:
double l;
double b;
double h;
};

int main()
{
Box Box1;
Box Box2;
double v=0.0;

Box1.h=3.0;
Box1.l=2.0;
Box1.b=1.0;

Box2.h=7.0;
Box2.l=8.0;
Box2.b=9.0;

v = Box1.h * Box1.l * Box1.b;
cout << "Vol of Box1 --> \n" << v <<endl;

v = Box2.h * Box2.l * Box2.b;
cout << "Vol of Box2 --> \n" << v <<endl;

return 0;
}
