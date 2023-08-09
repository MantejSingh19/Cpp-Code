#include<iostream>
#include<vector>
using namespace std;
int main()
{
   /* int a,b,c;
    cin>>a>>b;
    c=a*b+true+false;
    cout<<"ans="<<c;

    //range based for loop

    vector<int> arr={1,2,3,4,5,6,7,8,9,0};
    for(int a:arr)
    {
        cout<<a<<endl;
    }

    int r,c,i,j;
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1 || i==5)
            {
                cout<<"*";
                cout<<" ";
                continue;
            }
           else if(j==2 || j==3)
            {
                cout<<" ";
                cout<<" ";
                cout<<" ";
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
    }*/

     int r,c,i,j,z,l;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=i;j<=3;j++)
        {
            cout<<" ";
        }
        for(z=1;z<=i;z++)
        {
            cout<<"*";
        }
         for(l=1;l<i;l++)
        {
            cout<<"*";
        }
        cout<<endl;

}         for(i=r;i>=1;i--)
    {
        for(j=i;j<=3;j++)
        {
            cout<<" ";
        }
        for(z=1;z<=i;z++)
        {
            cout<<"*";
        }
         for(l=1;l<i;l++)
        {
            cout<<"*";
        }

        cout<<endl;
    }











































    return 0;
}


