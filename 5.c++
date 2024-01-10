//WAP to concatenate two strings by overloading the binary - operator.
#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class strings{
    private:
    char str[40];
    public:
    void input()
    {
        cout<<"Enter the string"<<endl;
        cin>>str;
    }
    strings operator -(strings s1)
    {
        strings temp;
        strcpy(temp.str,str);
        strcat(temp.str, " ");
        strcat(temp.str,s1.str);
        return (temp);
    }
    void display()
    {
        cout<<"The string is"<<str<<endl;
    }
};
int main()
{
    strings s2,s3,s4;
    s2.input();
    s3.input();
    s4=s2-s3;
    s4.display();
    getch();
    return 0;
}