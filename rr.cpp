#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int func(int ind,vector<int> &arr,vector<int> &ds,int target)
{
    if(target==0)
    {
        for(int i=0;i<ds.size();i++)
        {
            cout<<ds[i];
        }
        cout<<endl;
        return 0;
        }
    for(int i=ind;i<5;i++)
    {
      if(i>ind && arr[i]==arr[i-1])
            continue;
      if(arr[i]>target)
        break;
      ds.push_back(arr[i]);
      func(i+1,arr,ds,target-arr[i]);
      ds.pop_back();
    }

}
int main()
{
    int target=4;
    vector<int> arr={1,1,1,2,2};
    sort(arr.begin(),arr.end());
    int n=5;
    vector<int> ds;
    func(0,arr,ds,target);

}
