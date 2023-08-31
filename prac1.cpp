#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0,j=0,ans=0;
    int tw=1,as=0,ld;
    cin>>n;
    if(n==0)
    {
        ans=1;
    }
   while(n!=0)
   {
       int bit=(n&1);
       if(bit==0)
       {
           bit=1;
       }
      else if(bit==1)
       {
           bit=0;
       }
       ans=(bit*pow(10,i))+ans;
       i++;
       n=n>>1;
   }
   while(ans!=0)
   {
       ld=ans%10;
       as=as+(ld*tw);
       tw=2*tw;
       ans=ans/10;
   }
   cout<<as;
}
