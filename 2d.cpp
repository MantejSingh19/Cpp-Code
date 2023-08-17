#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,temp,k ;
    cin>>n>>m;
    int arr1[n][m];
    int arr2[m][n];
    int sum[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }
         for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr2[i][j];
        }

    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=0;
        }

    }
   /* for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<" "<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>0 && j<m-1)
            {
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }

    }*/

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                sum[i][j]=sum[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<sum[i][j];
        }

    }




}

