#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<endl;
    for(i=0;i<n-1;i=i+2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];

    }
}
