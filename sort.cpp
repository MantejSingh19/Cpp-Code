#include<iostream>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int arr[n],i,j,z;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                z=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=z;
            }
        }
    }
    cout<<arr[n-1]+arr[n-2];
}
