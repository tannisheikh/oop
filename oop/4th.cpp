#include<iostream>
using namespace std;
class myclass{
private:
 string name;
 int id;
public:
void Tanni(){
 cin>>name>>id;
 cout<<name<<endl;
 cout<<id<<endl;
}
};
int main()
{
myclass obj;
obj.Tanni();
    return 0;
}
