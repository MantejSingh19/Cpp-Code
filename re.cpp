#include<iostream>
#include<vector>
using namespace std;
int func(int ind,int sum,int arr[],vector<int> &ds,int n)
{
    if(ind>=n)
    {
        cout<<sum<<endl;

        return 0;
    }
    ds.push_back(arr[ind]);
    func(ind+1,sum+arr[ind],arr,ds,n);
    ds.pop_back();
    func(ind+1,sum-arr[ind],arr,ds,n);
}

int main()
{
   int arr[3]={1,2,3};
   vector<int> ds;
   int n=3;
  func(0,0,arr,ds,n);
   return 0;

}
