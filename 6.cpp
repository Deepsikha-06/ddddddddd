  //Q6) Display the sum of two numbers using multilevel inheritance where one number is declared in base class and one number is declared in first derived class. function is define in the sec derived class to sum of two numbers.

#include<iostream>
using namespace std;

class A{
    public:
    int x;
};
class B:public A{
    public:
    int y;
};
class C:public B{
    public:
    void display()
    {
        x=5;
        y=10;
        cout<<x+y;
    }
};

int main()
{
    C ob;
    ob.display();
}