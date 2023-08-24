#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> str;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        char brac;
        cin>>brac;
        if(brac=='(')
        {
            str.push('(');
        }
        else{
            str.pop();
        }

    }
    if(str.size()==0)
    {
        cout<<"valid statement";
    }
    else{
        cout<<"invalid statement";
    }

}
