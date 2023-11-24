#include<iostream>
using namespace std;
int main()
{
    int arr[6]={3,1,7,5,2,8};
    int no;
    for(int i=0;i<6-1;i++)
    {
       for(int j=0;j<6-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            no=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=no;
        }
    }
    }
     for(int j=0;j<6;j++)
        {

            cout<<arr[j]<<endl;
        }
}
