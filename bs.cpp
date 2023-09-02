#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,k;
    vector<int> nums;
    for(i=0;i<8;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);

    }

        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();)
            {
                if(nums[i]==nums[j])
                {
                    for(k=j+1;k<nums.size();k++)
                   {
                       nums[k-1]=nums[k];
                   }

                }


            }
        }
        for(i=0;i<nums.size();i++)
    {
        cout<<nums[i];

    }

}
