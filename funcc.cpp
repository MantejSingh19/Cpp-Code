#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,factorial;
    cin>>n;
    factorial=fact(n);
    cout<<factorial;

}
int fact(int n)
{
    int fac=1,i,sum=0,ttl=0,j;
    for(i=1;i<=n;i++)
    {
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac=fac*j;
        }
        cout<<fac<<endl;
        sum=sum+fac;

    }
    cout<<sum<<endl;
        return 0;
}
