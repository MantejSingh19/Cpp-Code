#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    int ct=0,ctt=0,cttt=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]==0)
       {
           ct++;
       }
        if(arr[i]==1)
       {
           ctt++;
       }
        if(arr[i]==2)
       {
           cttt++;
       }

    }
     for(i=0;i<ct;i++)
    {
        arr[i]=0;
    }
     for(i=ct;i<ctt+ct;i++)
    {
        arr[i]=1;
    }
     for(i=ctt+ct;i<cttt+ct+ct;i++)
    {
        arr[i]=2;
    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }


}
