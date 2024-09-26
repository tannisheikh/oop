#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your full name:";
    getline(cin,name);

    string current;
    cout<<"Enter your current address:";
    getline(cin,current);

    string permanent;
    cout<<"Enter your permanent address:";
    getline(cin,permanent);

    cout<<"Hello,"<<name<<endl;
    cout<<"Your current address:"<<current<<endl;
    cout<<"Your permanent address:"<<permanent<<endl;

    return 0;
}
