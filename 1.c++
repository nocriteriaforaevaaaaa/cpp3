//WAP to find the sum of a data member of 2 different classes using the concept of friend functions.
#include<iostream>
#include<conio.h>
using namespace std;
class two;
class one
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }
    friend int sum(one o,two t);
};
class two{
    private:
    int b;
    public:
    void input()
    {
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    friend int sum(one o, two t);

};
int sum(one o,two t)
{
    return (o.a+t.b);
}
int main()
{
    one o1;
    two t1;
    o1.input();
    t1.input();
    cout<<"The sum="<<sum(o1,t1);
    getch();
    return 0;
}