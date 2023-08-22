#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lf,rf,k=16;
    lf=0;
    rf=n-1;
    while(lf<rf)
    {
        if(arr[lf]+arr[rf]==k)
        {
            cout<<"yess"<<arr[lf]<<arr[rf];
        }
         if(arr[lf]+arr[rf]<k)
         {
             lf++;
         }
          if(arr[lf]+arr[rf]>k)
          {
              rf--;
          }
    }







}
