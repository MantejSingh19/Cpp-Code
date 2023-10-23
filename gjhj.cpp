#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void func(int ind,int arr[],int sum,vector<int> &ds,int n)
{
    if(ind==n)
    {
        for(int i=0;i<ds.size();i++)
        {
            cout<<ds[i];
        }
        cout<<endl;
        cout<<sum<<endl;
        return ;
    }
sum=sum+arr[ind];
    ds.push_back(arr[ind]);
    func(ind+1,arr,sum,ds,n);
    ds.pop_back();
sum=sum-arr[ind];
    func(ind+1,arr,sum,ds,n);

}


int main()
{
    int arr[3]={1,2,3};
    int n=3;
    vector<int> ds;
    func(0,arr,0,ds,n);

}
