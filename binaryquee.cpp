#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int l=1,r=n-2,arr[n];
    int mid=(l+r)/2;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    while(l<=r)
    {
         int mid=(l+r)/2;
        if(arr[0]!=arr[1])
           {
                cout<<0;
                break;

           }
        if(arr[n-1]!=arr[n-2])
           {
                cout<<n-1;
                break;

           }
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
        {
            cout<<mid;
            break;
        }
        if((arr[mid]==arr[mid+1] && mid%2==0) || (arr[mid]==arr[mid-1] && mid%2!=0))
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
}

