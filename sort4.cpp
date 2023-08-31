#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        if(arr[i]==2)
        {
            i++;
        }
        if(arr[j]==2)
        {
            j--;
        }
        if(arr[i]==0 && arr[j]==1)
        {
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==1)
        {
            j--;
        }
        else{
            i++;
        }

    }
    i=0;
    j=n-1;
    while(i<j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        if(arr[i]==2 && arr[j]==1)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==2)
        {
            i++;
            j--;
        }
        else if(i==2)
        {
            j--;
        }
        else{
            i++;
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }






}
