#include<iostream>
using namespace std;
int main()
{
    int n,i,j,maxx=INT_MIN;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[j]>maxx)
            {
                maxx=arr[j];
            }

            }
            cout<<maxx;
    }





}
