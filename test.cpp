#include<iostream>
using namespace std;
int main()
{
    int i;
    long long x=10;
    /*for(i=0;i<x;i++)
    {
        cout<<i<<endl;
    }*/
    while(x!=0)
    {
        cout<<x%2;
        x=x/2;
    }
}
