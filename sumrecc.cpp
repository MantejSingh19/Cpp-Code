#include<iostream>
using namespace std;
int sum(int *ptr,int n,int summ)
{
    if(n==0)
    {
     return summ;
    }
    n--;
    summ=sum(ptr+1,n,summ);
    summ=summ+ptr[0];
    return summ;

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int summ=0;
    int ans=sum(arr,n,summ);
    cout<<ans;


}
