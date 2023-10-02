#include<iostream>
using namespace std;
int mergesort(int *arr,int i,int e)
{
    int mid=(i+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int k=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[k++];
    }

    int idx1=0;
    int idx2=0;
    k=s;
    while(idx1<len1 && idx2<len2)
    {
        if(first[idx1]<second[idx2])
        {
            arr[k++]=first[idx1++];
        }
        else{
            arr[k++]=second[idx2++];
        }

    }
    while(idx1<len1){
        arr[k++]=first[idx1++];
    }
     while(idx2<len2){
        arr[k++]=second[idx2++];
    }


}
int mergee(int *arr,int i,int e,int n)
{
    int mid=(i+e)/2;
    if(i>=e)
    {
        return 0;
    }
    mergee(arr,i,mid,n);

    mergee(arr,mid+1,e,n);

    mergesort(arr,s,e);
}
int main()
{
    int arr[6]={2,4,1,5,8,3};
    int n=6,i=0,e=n-1;
    mergee(arr,i,e,n);
}
