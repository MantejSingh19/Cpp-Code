#include<iostream>
#include<set>
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
                int g;
                cin>>g;
                s.insert(g);
            }
        if(command=="erase")
        {
            int h;
            cin>>h;
            s.erase(h);
        }
        if(command=="size")
        {
            cout<<s.size();
        }
    }
    for(auto i:s)
    {
        cout<<i<<endl;
    }



}
