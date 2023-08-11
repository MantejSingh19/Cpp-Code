#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i,j,z;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        int minn=INT_MAX;
        for(j=i;j<n;j++)
        {

            if(arr[j]<minn)
            {
                minn=arr[j];
            }

        }
        for(z=0;z<n;z++)
        {
            if(arr[z]==minn)
                break;
        }
        arr[z]=arr[i];
         arr[i]=minn;
    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

