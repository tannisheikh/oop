#include<iostream>
using namespace std;
class myclass{
 private:
  string name;
  int id;
 public:
 void getdata(string n,int i){
 name=n;
 id=i;
 }
 void putdata(){
 cout<<name<<endl;
 cout<<id<<endl;
 }

};
int main()
{
  myclass obj;
   string n;
   int i;
   cout<<"Enter your name:";
   cin>>n;
   cout<<"enter your id:";
   cin>>i;
   obj.getdata(n,i);
   obj.putdata();

    return 0;
}
