#include<iostream>
using namespace std;
int main()
{ int n,ld,rev,f=0,s=0,z=1;
cin>>n;
while(n>0)
{
    ld=n%10;
    if(z%2==0)
    {
        f=f*10+ld;
    }
    else{
        s=s*10+ld;
    }
    z++;
    n=n/10;
    rev=rev*10+ld;

}
cout<<f<<endl;
cout<<s<<endl;
cout<<rev;
}
