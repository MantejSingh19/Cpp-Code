#include<iostream>
using namespace std;
int main()
{
    int arr[6]={3,1,7,5,2,8};
    int no;
    int j;
    for(int i=1;i<6;i++)
    {
        no=arr[i];
        j=i-1;
        while(arr[j]>no && j>=0)
        {
          arr[j+1]=arr[j];
          j--;

        }
        arr[j+1]=no;
    }

}
