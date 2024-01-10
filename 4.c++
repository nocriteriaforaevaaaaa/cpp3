// WAP to add two times by overloading binary + operator where sec, min, hour, and day are data members of class ‘Time’
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
    private:
    int sec,min,hr,day;
    public:
    void input()
        {
            cout<<"Enter the value of seconds,minutes,hours and days"<<endl;
            cin>>sec>>min>>hr>>day;
        }
    Time operator +(Time t)
    {
        Time t1;
        t1.sec=sec+t.sec;
        t1.min=min+t.min+t1.sec/60;
        t1.sec=t1.sec%60;
        t1.hr=hr+t.hr+t1.min/60;
        t1.min=t1.min%60;
        t1.day=day+t.day+t1.hr/24;
        t1.hr=t1.hr%24;
        return t1;
    }
    void display()
    {
        cout<<"Days="<<day<<endl<<"Hours="<<hr<<endl<<"Minutes="<<min<<endl<<"Seconds="<<sec<<endl;
    }
};
    int main()
    {
        Time t2,t3,t4;
        t2.input();
        t3.input();
        t4=t2+t3;
        t4.display();
        getch();
        return 0;
    }


    
