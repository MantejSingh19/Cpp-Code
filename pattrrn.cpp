#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=k ;j++)
        {
            cout<<i;
            i--;
        }
        cout<<endl;
        i=k;
    }
}
