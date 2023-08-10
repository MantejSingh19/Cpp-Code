#include<iostream>
using namespace std;
int main()
{
  int a=1,b=0,sum,i,n;
  cin>>n;
  cout<<b<<endl;
  cout<<a<<endl;
  for(i=1;i<=n;i++)
  {

      sum=a+b;
      b=a;
       a=sum;
      cout<<sum<<endl;

  }

}
