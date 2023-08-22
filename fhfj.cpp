#include<iostream>
using namespace std;
int main()
{
    int ans=0,n,m,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<i+j<<endl;
        }
    }


}
