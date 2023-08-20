#include<iostream>
using namespace std;
int main()
{
    int i,j,n,flag=0;
    cin>>n;
     int arr[n];
     for(i=0;i<n;i++)
    {

       cin>>arr[i];

    }

    for(i=0;i<1000;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
           if(i!=arr[j])
           {
               flag++;
           }
        }
        if(flag==n)
        {
            cout<<"Small no miss:"<<i;
            break;

        }
    }
}
