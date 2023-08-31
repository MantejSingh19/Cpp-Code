#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int arr[n],arr1[m];
    vector<int> cnt;
  for(i=0;i<n;i++)
{
    cin>>arr[i];

}
for(i=0;i<m;i++)
{
    cin>>arr1[i];

}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(arr[i]<arr1[j])
        {
            break;
        }
        if(arr[i]==arr1[j])
        {
            cnt.push_back(arr[i]);
            break;
        }
    }
}
for(i=0;i<cnt.size();i++)
{
    cout<<cnt[i];

}






}
