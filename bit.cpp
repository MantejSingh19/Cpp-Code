#include<iostream>
using namespace std;
int main()
{

     long long countt=0,bit,mul=1,intt=0,ls,n;
     cin>>n;
        while(n!=0)
        {
            ls=n%10;
            if(ls==1)
            {
                intt=mul+intt;
            }
            mul=mul*2;
            n=n/10;
        }
        cout<<intt<<endl;
        while(intt!=0)
        {
            bit=(intt & 1);
            if(bit==1)
            {
                countt++;
            }
            intt=intt>>1;
        }
        cout<<countt;
}

