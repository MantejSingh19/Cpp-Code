#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,c,i,j=0,ttl=0,z,s;
    cin>>n;
    c=n;
    s=n;
    while(n>0)
    {
        i=n%10;
        n=n/10;
        j++;
    }
    while(c>0)
    {
        i=c%10;
        c=c/10;
        z=pow(i,j);
        ttl=ttl+z;
    }
    if(ttl==s)
    {
        cout<<"Arnstrong number";
    }
    else{
        cout<<"Not armstrong";
    }
}
