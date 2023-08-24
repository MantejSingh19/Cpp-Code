#include<iostream>
using namespace std;
int main()
{
    int n,i,len;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if(str.size()>10)
        {
            len=str.size()-2;
        cout<<str[0]<<len<<str[str.size()-1];
        }
        else
        {
            cout<<str;
        }

    }

}
