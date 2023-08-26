#include<iostream>
using namespace std;
int main()
{
   int *ptr;
  /* ptr=new int;
   cin>>*ptr;
   cout<<*ptr;
   delete ptr;*/

   int n=5,i;
   ptr=new int[5];
   for(i=0;i<n;i++)
   {
       cin>>*ptr;
       ptr=ptr+1;
   }
   ptr=ptr-5;
   for(i=0;i<n;i++,ptr++)
   {
       cout<<*ptr;

   }
   delete ptr;
   ptr=NULL;
}
