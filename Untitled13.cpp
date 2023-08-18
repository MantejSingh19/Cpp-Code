#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5,z,k;
    for(i=0;i<n;i++)
    {
        for(z=0;z<i;z++)
        {
            cout<<" ";
        }
       for(j=0;j<n;j++)
       {
           cout<<"*";
       }
        cout<<endl;
    }

}
