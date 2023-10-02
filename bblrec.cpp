#include<iostream>
using namespace std;
int bubble(int *arr,int i,int n)
{
    if(i==n-2)
    {
        return 0;
    }
    if(arr[i]>arr[i+1])
    {
        swap(arr[i],arr[i+1]);
        bubble(arr,++i,n);
    }
    else{
         bubble(arr,++i,n);
    }

}
int main()
{
    int arr[5]={5,4,2,3,1};
    int i=0,n=5;
    bubble(arr,i,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
