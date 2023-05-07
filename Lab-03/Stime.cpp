#include<iostream>

using namespace std;

struct Stime
{
    int hour;
    int minute;
    int second;
};

int main()
{
    Stime dsa;
    cout <<"\nEnter the class hour: ";
    cin>>dsa.hour;

    cout <<"\nEnter the class minute: ";
    cin>>dsa.minute;
    
    cout <<"\nEnter the class second: ";
    cin>>dsa.second;

    cout<<"\nYour class for DSA is: "
        <<dsa.hour<<":"<<dsa.minute<<":"<<dsa.second;
    return 0;
}