#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,curr=1,cd,pd;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"enter"<<endl;
        cin>>arr[i];
    }
    for(i=2;i<n;i++)
    {
        pd=arr[i-1]-arr[i-2];
        cd=arr[i]-arr[i-1];
        if(cd==pd)
        {
            curr++;
        sum=max(sum,curr);
    }
    else{
        curr=1;
    }
    }
    cout<<sum;
}
