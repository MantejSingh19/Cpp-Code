#include<iostream>
using namespace std;
int main()
{
   int n,r=1,sum=0,ld;
   cin>>n;
   while(n>0)
   {


       ld=n%10;
       if(ld==1)
       {
           sum=sum+(r*ld);
       }
       r=2*r;
       n=n/10;

   }
   cout<<sum;



}
