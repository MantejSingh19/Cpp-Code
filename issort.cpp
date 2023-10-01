#include<iostream>
using namespace std;
bool issort(int *arr,int n,int i,int cnt)
{
    if(cnt==n-1)
    {
        return true;
    }
    if(arr[i]>arr[i+1])
    {
       return false;
    }
    else{
    bool ans=issort(arr,n,++i,++cnt);
    return ans;
    }

}
int main()
{
    int arr[5]={1,2,3,4,9};
    int n=5;
    bool ans=issort(arr,n,0,0);
    cout<<ans;
}
