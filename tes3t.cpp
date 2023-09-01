#include<iostream>
using namespace std;
int main()
{
   int n,i,j,mid;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   i=0,j=n-1,mid=i+(j-i)/2;
   while(i<j)
   {
       if(arr[mid]>=arr[0])
       {
           i=mid+1;
       }
       else{
        j=mid;
       }
       mid=i+(j-i)/2;
   }
   cout<<j;
}
