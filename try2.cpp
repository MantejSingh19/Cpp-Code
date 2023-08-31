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
i=0;
j=0;
while(i<n && j<m)
{
    if(arr[i]==arr1[j])
    {
        cnt.push_back(arr[i]);
        i++;
        j++;
    }
    else if(arr[i]<arr1[j])
    {
        i++;
    }
    else{
        j++;

    }
}
for(i=0;i<cnt.size();i++)
{
    cout<<cnt[i];

}







}
