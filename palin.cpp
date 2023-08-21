#include<iostream>
using namespace std;
int main()
{
    int n,i,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n/2;i++)    //1 2 3 4 5
                           //0 1 2 3 4
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
