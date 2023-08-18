#include<iostream>
using namespace std;
int main()
{
    int i,j,flag=0,n=100;
    for(i=1;i<n;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;

            }
        }
        if(flag==0)
        {
            cout<<"prime"<<endl;
        }
        else{
            cout<<"not prime"<<endl;
        }
    }
}

