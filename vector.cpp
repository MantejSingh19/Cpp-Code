#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr;
int i,sum=0;
for(i=0;i<5;i++)
{
     arr.push_back(i);
}
for(i=0;i<5;i++)
{
    sum=sum+arr[i];
}
cout<<sum;
}
//int last=arr.pop_back()
//arr.insert(10,1)insert 10 at index 1
//arr.clear()
//arr1.swap(arr2)
//arr(5,0)0 will be assigned to all
//arr.size()
//arr.max_size()
//arr.capacity()
