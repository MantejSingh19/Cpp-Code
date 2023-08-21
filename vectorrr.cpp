#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> arr;
   arr.push_back(1);
   arr.push_back(2);
    arr.push_back(3);
for(i=0;i<arr.size();i++)
{
    cout<<arr[i];
}
vector<int>::iterator it;
for(it=arr.begin();it<arr.end();it++)
{
    cout<<*it<<endl;
}
for(auto element:arr)
{
    cout<<element;
}






}
