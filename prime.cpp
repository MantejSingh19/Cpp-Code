#include<iostream>
using namespace std;
int main()
{
    int n,num=2,flag=0;
    cin>>n;
    while(num<n)
    {
        if(n%num==0)
        {
            flag++;
            break;
        }
        num++;
    }
    if(flag==0)
    {
        cout<<"Prime";

    }
    else{
        cout<<"Not Prime";
    }
}
