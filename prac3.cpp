#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,flag=0;
    int tw;
    cin>>n;
    for(i=1;i<=31;i++)
    {
    if(tw==n)
        {
            cout<<"YES";
            flag++;
            break;
        }

        tw=tw*2;
    }
    if(flag==0)
    {
        cout<<"NO";
    }
}
