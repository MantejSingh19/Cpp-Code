#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int l=1,r=n-1,arr[n];
    int mid=(l+r)/2;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(l<=r)
    {
        if(arr[0]==1)
        {
            cout<<0;
            break;
        }
        if(arr[mid]==1 && arr[mid-1]==0)
        {
            cout<<mid;
            break;
        }
        if(arr[mid]==0)
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
}
