#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    char ch='A';
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            char dh=ch+j-1;
            cout<<dh;

        }
        cout<<endl;
        ch++;

    }
}
