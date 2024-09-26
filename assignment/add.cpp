#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cout<<"Enter string:"<<endl;
    getline(cin,name);
    string res;
    for(int i=0; i<=name.size(); i=i+1)
    {
        if(isspace(name[i]))
        {
            continue;
        }
        else
        {
            res=res+name[i];
        }
    }
    cout<<"Even character:"<<endl;
    for(int i=0; i<=res.size(); i=i+2)
    {
        cout<<res[i]<<endl;
    }

    return 0;
}

