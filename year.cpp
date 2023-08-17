#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;

   if(n<3)
   {
       cout<<"infant";
   }
   else if(n<19)
   {
       cout<<"teenage";
   }
   else if(n<30)
   {
       cout<<"adult";
   }
   else if(n<60)
   {
       cout<<"middle age";
   }
   else{
    cout<<"old age";
   }
   return 0;
}

