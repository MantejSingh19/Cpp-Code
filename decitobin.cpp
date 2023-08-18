#include<iostream>
using namespace std;
int main()
{
    int n,num,k,j=0,z,d=0;
    cin>>n;
    while(n>0)
   {
     num=n/2;
     k=n%2;
     j=j*10+k;
     n=num;
   }
   while(j>0)
   {
       z=j%10;
       j=j/10;
       d=d*10+z;
   }
   cout<<d;


}
