//WAP to create two classes, `ClassA` and `ClassB`, make `ClassB` a friend of `ClassA`, and demonstrate how `ClassB` can access and display the private variable of `ClassA`.
#include<iostream>
#include<conio.h>
using namespace std;
class ClassB;
class ClassA
{
 private:
 int a;
 public:
 void input()
 {
    cout<<"Enter the value of a"<<endl;
    cin>>a;
 }
 friend ClassB;
};

class ClassB{
    private:
    int b,s;
    public:
    void input()
    {
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void add(ClassA o)
    {
      s=o.a+b;
    }
    void display()
    {
        cout<<"The sum="<<s<<endl;
    }
};
int main()
{
    ClassA o;
    ClassB t;
    o.input();
    t.input();
    t.add(o);
    t.display();
    getch();
    return 0;
}
