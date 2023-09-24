#include<iostream>
using namespace std;
bool palin(string str,int i,int j)
{
    if(i>j)
    {
        return true;
    }
    if(str[i]==str[j])
    {
       return palin(str,++i,--j);

    }
    else{
        return false;
    }
    }
int main()
{
    string str="ashhsa";
    int i=0,j=str.length()-1;
    bool ans=palin(str,i,j);
    cout<<ans;

}
