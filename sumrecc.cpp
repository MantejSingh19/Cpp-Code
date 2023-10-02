#include<iostream>
using namespace std;
int sum(int *ptr,int n)
{
    if(n==0)
    {
     return 0;
    }
    n--;
   int summ=sum(ptr+1,n);
    summ=summ+ptr[0];
    return summ;

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int summ=0;
    int ans=sum(arr,n);
    cout<<ans;


}
