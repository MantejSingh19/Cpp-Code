#include<iostream>
using namespace std;
int fibo(int b,int a,int n,int cnt);
int main()
{
    int cnt=0;
     int a=1;
    int b=0;
    int i=10;
fibo(b,a,i,cnt);
}
int fibo(int b,int a,int n,int cnt)
{
    if(cnt==n)
    {
      return 0;
    }
    cnt++;
    int summ=a+b;
    fibo(a,summ,n,cnt);
    if(cnt==6)
    {
         cout<<summ<<endl;

    }

    return 0;
}
