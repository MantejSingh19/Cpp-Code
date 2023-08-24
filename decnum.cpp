#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int k;
    cin>>k;
    for(i=0;i<k;i++)
    {
        j=n%10;
        if(j!=0)
        {
            n--;
        }
        else{
            n=n/10;
        }
    }
    cout<<n;




}
