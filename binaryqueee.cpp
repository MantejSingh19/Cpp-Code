#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int l=0,r=n-1,arr[n];
    int mid=(l+r)/2;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]<arr[mid]-1)
        {
            cout<<mid;
            break;
        }
        if(arr[mid]>arr[n-1])
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
}

