#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        string command;
        cin>>command;
        if(command=="push")
        {
            int x;
            cin>>x;
            st.push(x);
        }
        if(command=="pop"){
            st.pop();
        }
        if(command=="top")
        {
            cout<<st.top();
        }
    }
}
