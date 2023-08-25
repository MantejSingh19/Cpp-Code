#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> one;
    vector<int> two;
    vector<int> sum;
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"first";
        int temp;
        cin>>temp;
        one.push_back(temp);
    }
     for(i=0;i<n;i++)
    {
        cout<<"second";
        int temp1;
        cin>>temp1;
        two.push_back(temp1);
    }
     for(i=0;i<n;i++)
    {
       sum.push_back(one[i]+two[i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<sum[i]<<endl;
    }
}
