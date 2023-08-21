#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //FIRST METHOD
    vector<vector<int>> arr;
    int r=3,c=3,i,temp,j;
    for(i=0;i<r;i++)
    {
        vector<int> row;
        for(j=0;j<c;j++)
        {
            cin>>temp;
            row.push_back(temp);
        }
        arr.push_back(row);
        }

    for(i=0;i<arr.size();i++)
    {
        for(j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }
    cout<<"rows"<<arr.size()<<"cols"<<arr[0].size();
    //NEXT

     vector<vector<int>> arr1;
    int r1=3,c1=3,i1,temp1,j1;
    for(i=0;i<r1;i++)
    {
        vector<int> row1;
        for(j1=0;j1<c;j1++)
        {
            cin>>temp1;
            row1.push_back(temp1);
        }
        arr1.push_back(row1);
        }

    for(i1=0;i1<arr1.size();i1++)
    {
        for(j1=0;j1<arr1[i1].size();j1++)
        {
            cout<<arr1[i1][j1]<<endl;
        }
    }
    cout<<"rows"<<arr1.size()<<"cols"<<arr1[0].size();
    //NEXT

    vector<vector<int>> sum;
    int i2,j2;
    for(i2=0;i2<r;i2++)
    {
        vector<int> row2;
        for(j2=0;j2<c;j2++)
        {
            row2.push_back(arr1[i2][j2]+arr[i2][j2]);
        }
        sum.push_back(row2);
    }
    for(i=0;i<sum.size();i++)
    {
        for(j=0;j<sum[i].size();j++)
        {
            cout<<sum[i][j]<<endl;
        }
    }






}

