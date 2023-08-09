#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<15)
    {
        i++;
        if(i%2==0)
        {
            continue;
        }
        if(i==13)
        {
            break;
        }
        cout<<"i=="<<i<<endl;
    }

    //prime or not

    int n,j,flag,i;
    cout <<"enter n" <<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
        }
        if(flag==2)
        {
            cout<< "Prime=="<<i<<endl;
        }
        else
        {
            cout << "not prime=="<<i<<endl;
        }
    }
return 0;
}
