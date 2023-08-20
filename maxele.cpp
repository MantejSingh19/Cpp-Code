#include<iostream>
using namespace std;
int main()
{
    int n,i,maxx=INT_MIN,mixx=INT_MIN;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==maxx)
        {
            continue;
        }
        else{
                if(arr[i]>mixx)
        {
            mixx=arr[i];
        }

        }
    }

    cout<<"real maximum"<<maxx;
    cout<<"second maxx"<<mixx;
}
