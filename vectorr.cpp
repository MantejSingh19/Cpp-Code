#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    vector<vector<int>> one;
    for(i=0;i<2;i++)
    {
        vector<int> temp1;
        for(j=0;j<2;j++)
        {
            int input;
            cin>>input;
            temp1.push_back(input);
        }
    }
   cout<<"SECOND"<<endl;

    vector<vector<int>> two;
    for(i=0;i<2;i++)
    {
        vector<int> temp2;
        for(j=0;j<2;j++)
        {
            int pinput;
            cin>>pinput;
            temp2.push_back(pinput);
        }
    }
    cout<<"Third"<<endl;

 vector<vector<int>> out1;
    for(i=0;i<2;i++)
    {
        vector<int> out;
        for(j=0;j<2;j++)
        {
            out1[i][j]= one[i][j] + two[i][j];
            cout<<out1[i][j]<<endl;
        }
    }

















//vector<int>oneD;
//vector<vector<int>> twoD;


}
