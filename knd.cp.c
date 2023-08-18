#include<iostream>
using namespace std;
int main()
{
   int n,r=1,sum=0;
   cin>>n;
   while(n>0)
   {
       r=2*r;
       ld=n%10;
       if(ld==1)
       {
           sum=sum+r*ld;
       }
       n=n/10;

   }
   cout<<sum;



}
