#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4,m=4,temp;
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
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

    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<" "<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
