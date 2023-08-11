#include<iostream>
using namespace std;
int main()
{
    int n,i,maxx=0,minn=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"enter the elements";
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        }

    }
    cout<<maxx<<endl;
    minn=maxx;
     for(i=0;i<n;i++)
    {
        if(arr[i]<minn)
        {
            minn=arr[i];
        }

    }
    cout<<minn<<endl;


}
