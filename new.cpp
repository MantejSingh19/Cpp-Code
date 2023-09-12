#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[3]={1,2,2};
   int i,j,ans=0;
   for(i=0;i<3;i++)
   {
       ans=0;
       for(j=i;j<3;j++)
       {
           ans=ans+arr[j];
           cout<<ans<<endl;

       }

   }

}
