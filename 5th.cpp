#include<iostream>
using namespace std;
class myclass{
private:
 string name;
 int id;
int semester;
public:
void getdata(){
 cin>>name>>id>>semester;
}
 void putdata(){
 cout<<name<<endl;
 cout<<id<<endl;
 cout<<semester<<endl;
}
};
int main()
{
myclass obj;
obj.getdata();
obj.putdata();
    return 0;
}
