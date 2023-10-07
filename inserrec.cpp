#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ins(int arr[],int i,int n)
{
    if(i>n-1)
    {
        return 0;

    }
    int temp=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>temp)
    {

        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    ins(arr,++i,n);

}
int main()
{
    int arr[6]={2,4,1,6,5,3};
    int i=1;
    ins(arr,i,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}
