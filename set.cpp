#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string command;
        cin>>command;
        if(command=="insert")
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        if(command=="erase")
        {
            int y;
            cin>>y;
            s.erase(y);
        }
        if(command=="find")
        {
            cout<<"which find";
            int f;
            cin>>f;
           int k=s.find(f);
        }
    }
    for(auto it:s)
    {
        cout<<it<<endl;
    }
    for(set<int>::iterator it:s)
    {
        cout<<(*it)<<endl;
    }

}
