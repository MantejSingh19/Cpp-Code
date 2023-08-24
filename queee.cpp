#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            int num;
            cin>>num;
            sum=sum+num;
        }
        arr[i]=sum;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
