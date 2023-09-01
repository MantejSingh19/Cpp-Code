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
        if(arr[i]==0 && arr[j]==1 && i<j)
        {
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==0 && i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==1 && i<j)
        {
            j--;
        }
        else if(arr[i]==0){
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
        if(arr[i]==2 && arr[j]==1 && i<j)
        {
            if(arr[i+1]==0)
            {
                swap(arr[i],arr[i+1]);
                swap(arr[i+1],arr[j]);
                continue;
            }
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==2 && i<j)
        {
            i++;
            j--;
        }
        else if(arr[i]==2 && i<j)
        {
            j--;
        }
        else if(arr[i]==1 && arr[i+1]!=0){
            i++;
        }
        else{
            swap(arr[i],arr[i+1]);
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }






}
