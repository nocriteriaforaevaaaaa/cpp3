//WAP to overload decrement operator using the concept of unary operator overloading
#include <iostream>
#include<conio.h>
using namespace std;
class test
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }
    void operator --()
    {
        a=a*2;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};
int main()
{
    test t;
    t.input();
    --t;
    t.display();
    getch();
    return 0;
}