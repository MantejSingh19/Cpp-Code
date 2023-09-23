#include<iostream>
using namespace std;

int pow(int,int);

int main(){
int i=10,j=2;
int ans=pow(i,j);
cout<<ans;

}
int pow(int i,int j)
{
   if(i==0)
   {
       return 1;

   }
   int anss=j*pow(i-1,j);
   return anss;

}

