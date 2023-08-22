#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int maxx=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        int k;

        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
              cout<<arr[k];

            }
        cout<<endl;
        }

    }


}
