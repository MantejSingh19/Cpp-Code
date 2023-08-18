#include<iostream>
using namespace std;
int main()
{int a,b,c,temp;
cin>>a>>b>>c;
if(a>b)
{
    if(a>c)
    {

    }
    else{
        temp=c;
        a=c;
        c=temp;
    }
}
else{
    if(b>c)
    {
         temp=b;
        a=b;
        b=temp;

    }
    else {
         temp=c;
        a=c;
        c=temp;
    }
}
cout<<"A= "<<a;
}
