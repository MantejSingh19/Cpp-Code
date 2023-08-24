#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j,countt=1,maxx=0;
    char ch;
    for(i=0;i<str.size();i++)
    {
        countt=1;
        for(j=i+1;j<str.size();j++)
        {
            if(str[i]==str[j])
            {
                countt++;
            }
            if(countt>maxx)
            {
                maxx=countt;
                ch=str[i];
            }
        }
    }
    cout<<ch<<maxx;
}
