#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,u,s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    int n=nums.size();
    int k=3;
    for(i=0;i<n;i++)
        {

            cout<<nums[i];
        }
         cout<<endl;
    vector<int> arr(n);

        for(i=0;i<n;i++)
        {

            j=i;
            u=k;
            int c=0;
            if(i+k>=n)
            {
                s=i+k-n;
                k=s;
                i=0;
            }
            cout<<i+k-n<<endl;
            arr[i+k]=nums[j];

            c++;
            i=j;
            k=u;

        }
         for(i=0;i<n;i++)
        {

            cout<<arr[i];
        }

        for(i=0;i<n;i++)
        {

            nums[i]=arr[i];
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {

            cout<<nums[i];
        }

        }


