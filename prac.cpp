#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //conversion from decimal to binary
    /*int n,i;
    cin>>n;
    while(n>0)
    {
        i=n%2;
        cout<<i<<endl;
        n=n/2;
    }*/

    long int n;
   int i,sum=0,c;
    cin>>n;
    for(i=0;i<=3;i++)
    {
        c=n%10;
        n=n/10;
        if(c==0)
        {

            continue;
        }
        sum=sum+pow(2,i);

    }
    cout<<sum;










}
