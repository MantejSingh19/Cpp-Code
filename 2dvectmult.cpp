#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> one;
    vector<vector<int>> two;
    vector<vector<int>> sum;
    int i,j,k,r1=3,com=2,c2=3;
    for(i=0;i<r1;i++)
    {
        vector<int> temp;
        for(j=0;j<com;j++)
        {
            cout<<"first";
           int a;
           cin>>a;
           temp.push_back(a);
        }
        one.push_back(temp);
    }
    for(i=0;i<com;i++)
    {
        vector<int> temp1;
        for(j=0;j<c2;j++)
        {
            cout<<"second";
           int a1;
           cin>>a1;
           temp1.push_back(a1);
        }
        two.push_back(temp1);
    }
    for(i=0;i<r1;i++)
    {
        vector<int> temp5;

        for(j=0;j<c2;j++)
        {
            int summ=0;

        for(k=0;k<com;k++)
        {
           summ=summ+(one[i][k]*two[k][j]);
        }
        temp5.push_back(summ);
         }
         sum.push_back(temp5);


    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<sum[i][j]<<endl;
        }

    }
}
