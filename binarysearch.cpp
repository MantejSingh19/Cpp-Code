#include<iostream>
using namespace std;
int main()
{
    int n,fe,le,mid,key,i;
    cin>>n;
    cin>>key;
    int arr[n];
    //Enter elements in sorted order only aesc
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    fe=0;
    le=n;
    while(fe<=le)
    {
        mid=(fe+le)/2;
        if(key>arr[mid])
        {
            fe=mid+1;
        }
        else if(key<arr[mid])
        {
            le=mid-1;
        }
        else if(arr[mid]==key)
        {
            cout<<mid<<endl;

        }
        else{
            cout<<"not found";
        }

    }
}
