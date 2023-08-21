#include<iostream>
using namespace std;
int add(int arr[])
    {
        int sum=0,i;
        for(i=0;i<5;i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }
int main()
{

    int i;
    int arr[5];
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

     cout<<add(arr);

}
