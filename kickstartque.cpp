#include<iostream>
using namespace std;
int main()
{
    int n,maxx=INT_MIN,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
            if(maxx>arr[i+1])
            {
                cout<<"Record Breaking day "<<i<<endl;
            }
        }

    }

}
