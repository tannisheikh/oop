#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three int number:";
    cin>>a>>b>>c;
    int result1=(a+b+c)/3;
    cout<<"Result:"<<result1<<endl;

    float x,y,z;
    cout<<"Enter three float number:";
    cin>>x>>y>>z;
    float result2=(x+y+z)/3;
    cout<<"Result:"<<result2<<endl;

    double m,n,o;
    cout<<"Enter three double number:";
    cin>>m>>n>>o;
    double result3=(m+n+o)/3;
    cout<<"Result:"<<result3<<endl;

    return 0;
}
