#include<iostream>
using namespace std;
int main()
{
    int n,num=1,fact=1;
    cin>>n;
    while(num<=n)
    {
        fact=fact*num;
        num++;
    }
    cout<<fact;
}
