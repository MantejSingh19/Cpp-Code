#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)\
    {
        for(j=i;j<n;j++)
        {
            if(arr[i]+arr[j]==8)
            {
                cout<<"i="<<i<<"j="<<j<<endl;
            }
        }
    }
}
