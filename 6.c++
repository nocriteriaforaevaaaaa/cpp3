//WAP to compare the values of two different objects by overloading < operator.
#include<iostream>
#include<conio.h>
using namespace std;
class Amount{
    private:
    int rs;
    public:
    void input()
    {
        cout<<"Enter the value in Rs"<<endl;
        cin>>rs;
    }
    int operator <(Amount A)
    {
        return(rs<A.rs?1:0);
    }
    void display()
    {
        cout<<"The amount is"<<rs<<endl;
    }

};
int main()
{
    Amount A1,A2;
    A1.input();
    A2.input();
    if(A1<A2)
    {
        cout<<"A1 is less than A2"<<endl;
        A1.display();
    }
    else {
        cout<<"A2 is less than A1"<<endl;
        A2.display();
    }
    getch();
    return 0;
}