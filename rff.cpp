#include<iostream>
#include<vector>
using namespace std;
int func(int ind,int target,int arr[],vector<int> &ds)
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
    if(ind>=4)
    {
        return 0;
    }
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        func(ind,target-arr[ind],arr,ds);
        ds.pop_back();
    }
    func(ind+1,target,arr,ds);
}
int main()
{
    int arr[4]={2,3,6,7};
    vector<int> ds;
     int target=7;
    func(0,target,arr,ds);
}
