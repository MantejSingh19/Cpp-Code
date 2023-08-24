#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(char open,char close)
    {
        if(open=='(' && close ==')')
        return true;
        if(open=='{' && close =='}')
        return true;
        if(open=='[' && close ==']')
        return true;
        return false;
    }
int main()
{

    bool valid=true;
    int i;
    string s;
    cin>>s;
    stack<char>str;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
               str.push(s[i]);
            }
        else{
       if(str.size()==0 || !check(str.top(),s[i]))
       {
           cout<<"invalid";
           valid=false;
           break;
       }
       str.pop();
        }

    }
    if(valid==true)
        {
            cout<<"valid stackk";
        }
        else{
            cout<<"invaid";
        }


}
