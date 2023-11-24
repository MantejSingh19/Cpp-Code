#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    long long ans=0;
    int rem;

    int x1;
    int dec=100;
    while(dec>1){
    int k=1;
    int x=2;
    while(k*2<=dec)
    {
        x=k*2;
        k++;
    }
    x1=x/2;
    cout<<x1<<endl;
     rem=dec-x;
    i++;
    if(rem==1)
    {
    ans=rem*pow(10,i)+ans;
    }
    else{
            rem=3;
        ans=rem*pow(10,i)+ans;
    }

    dec=x1;
    }
    if(rem==1)
    {
        i++;
    ans=rem*pow(10,i)+ans;
    }
    cout<<ans;


}

