#include<iostream>
using namespace std;
int fib(int n,int i,int j,int cnt)
{
    if(cnt==n)
    {
        return 0;
    }
    cnt++;

   fib(n,i+j,i,cnt);
    cout<<i+j<<endl;
}
int main()
{

   int i=0,j=1;
   int cnt=0;
   int n=10;
   cout<<i<<endl;
   cout<<j<<endl;
   fib(n,i,j,cnt);

}
