 //Q4) display sum of two integers values, sum of two float values, two char values using constructor overloading. 

#include <iostream>
using namespace std;

class A{
    public:
    A(int x,int y)
    {
        cout<<x+y;
    }
    A(float x,float y)
    {
        cout<<x+y;
    }
    A(char x,char y)
    {
        cout<<x+y;
    }
    
};

int main()
{
    A ob1(2.1,2.2);
    A ob1(2,6);
    A ob1('A','B');
    return 0;
}