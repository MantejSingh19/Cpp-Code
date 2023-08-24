#include<iostream>
using namespace std;
string upper(string str)
{
    int i;
    for(i=0;i<str.size();i++)
    {
        if(str[i]>96 && str[i]<123)
        {
            str[i]=str[i]-32;
        }

    }
     return str;
}
string downner(string str)
{
    int i;
    for(i=0;i<str.size();i++)
    {
        if(str[i]>64 && str[i]<91)
        {
            str[i]=str[i]+32;
        }

    }
     return str;
}
int main()
{
    string str;
    cin>>str;
    string upp;
    string downn;
    upp=upper(str);
    downn=downner(str);
    cout<<upp  << downn;
}
