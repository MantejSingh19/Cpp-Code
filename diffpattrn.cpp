#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(k=5;k>i;k--)
        {
            cout<<'*';
        }
        for(k=5;k>i;k--)
        {
            cout<<'*';
        }
        for(l=i;l>=1;l--)
        {
           cout<<l;
        }
        cout<<endl;
    }
}
