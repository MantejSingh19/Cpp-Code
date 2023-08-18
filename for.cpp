#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5,z,k;
    for(i=0;i<n;i++)
    {
        for(z=4;z>i;z--)
        {
            cout<<" ";
        }
       for(j=0;j<=i;j++)
       {
           cout<<"*";
       }
       for(k=1;k<=i;k++)
       {
           cout<<"*";
       }
        cout<<endl;
    }

}
